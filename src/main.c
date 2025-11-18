/*
 * Copyright (c) 2020 Friedt Professional Engineering Services, Inc
 * Copyright (c) 2020-2025 Jason Kridner, BeagleBoard.org Foundation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/led.h>
#include <zephyr/drivers/adc.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <zephyr/devicetree.h>
#include <errno.h>
#include <zephyr/linker/sections.h>
#include <zephyr/pm/device.h>
#include <zephyr/pm/device_runtime.h>
#include <zephyr/sys/printk.h>
#include <math.h>
#include <string.h>
#include <zephyr/net/net_ip.h>
#include <zephyr/net/net_if.h>
#include <zephyr/net/socket.h>
#include <zephyr/net/udp.h>
#include <zephyr/net/ieee802154_radio.h>
#include <zephyr/net/ieee802154_mgmt.h>
#include <zephyr/net/net_mgmt.h>

#define PANID 0xabcd
#define CHANNEL 1

static const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
static const struct device * const uart = DEVICE_DT_GET(DT_CHOSEN(zephyr_console));
static const struct device * const netdevice = DEVICE_DT_GET(DT_NODELABEL(ieee802154g));
static const struct device * const adc = DEVICE_DT_GET(DT_NODELABEL(adc0));
static const struct adc_dt_spec an_mb1_dt = ADC_DT_SPEC_GET_BY_NAME(DT_PATH(zephyr_user),an_mb1);

static void read_an_mb1()
{
	uint16_t an_mb1_buf;
	struct adc_sequence an_mb1_seq = {
		.buffer = &an_mb1_buf,
		.buffer_size = sizeof(an_mb1_buf),
	};
	int32_t an_mb1_val;
	int rc;
	printk("Setting up ADC\n");
	rc = adc_channel_setup_dt(&an_mb1_dt);
	if(rc < 0) printk("adc_channel_setup_dt(AN_MB1) failed: %d\n", rc);
	printk("Setting up ADC sequence\n");
	rc = adc_sequence_init_dt(&an_mb1_dt, &an_mb1_seq);
	if(rc != 0) printk("adc_sequence_init_dt(AN_MB1) failed: %d\n", rc);
	printk("Reading ADC\n");
	rc = adc_read_dt(&an_mb1_dt, &an_mb1_seq);
	if(rc != 0) printk("adc_read_dt(AN_MB1) failed: %d\n", rc);
	an_mb1_val = (int32_t)an_mb1_buf;
	rc = adc_raw_to_millivolts_dt(&an_mb1_dt, &an_mb1_val);
	if(rc != 0) printk("adc_raw_to_millivolts(AN_MB1) failed: %d\n", rc);
	printk("an_mb1_val: %d\n", an_mb1_val);
}

#include <zephyr/net/net_ip.h>

static int add_link_local_from_mac(struct net_if *iface)
{
	struct in6_addr addr;
	struct net_linkaddr *lladdr = net_if_get_link_addr(iface);
	char astr[INET6_ADDRSTRLEN];

	if (!lladdr) {
		return -ENODEV;
	}

	/* fe80::/64 prefix */
	memset(&addr, 0, sizeof(addr));
	addr.s6_addr[0] = 0xfe;
	addr.s6_addr[1] = 0x80;

	/* Fill in the IID from the link-layer address */
	net_ipv6_addr_create_iid(&addr, lladdr);

	if (!net_if_ipv6_addr_add(iface, &addr,
			NET_ADDR_MANUAL, 0)) {
		return -EIO;
	}

	if(!inet_ntop(AF_INET6, lladdr, astr, sizeof(astr))) {
		return -EFAULT;
	}

	printk("Assigned link local IPv6: %s\n", astr);
	return 0;
}

#define SEND_IP "ff02::1"
const char send_msg[] = "TEST";

int main(void)
{
	int r;
	const struct ieee802154_radio_api * netdeviceapi = netdevice->api;
	struct net_if * iface = net_if_get_default();

	printk("Reached main()\n");
	read_an_mb1();
	printk("Start network configuration\n");
	net_if_up(iface);
	uint16_t panid = sys_cpu_to_le16(PANID);
	uint16_t channel = CHANNEL;
	r = net_mgmt(NET_REQUEST_IEEE802154_SET_PAN_ID,
			iface, &panid, sizeof(panid));
	printk("net_mgmt(SET_PAN_ID): %d\n", r);
	r = net_mgmt(NET_REQUEST_IEEE802154_SET_CHANNEL,
			iface, &channel, sizeof(channel));
	printk("net_mgmt(SET_CHANNEL): %d\n", r);
	r = add_link_local_from_mac(iface);
	printk("add_link_local_from_mac(): %d\n", r);
	read_an_mb1();
	printk("Stop network device\n");
	netdeviceapi->stop(netdevice);
	read_an_mb1();
	printk("Start network device\n");
	netdeviceapi->start(netdevice);
	read_an_mb1();
	printk("Exiting main()\n");
	return(0);
}
