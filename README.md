# CC1352P7 Zephyr Clock/PM Issues

## Build

```sh
west build -b beagleconnect_freedom -p always .
```

## Flash


```sh
west flash
```

## Issue

```sh
:00:00.000,823] <dbg> pm: pm_system_suspend: No PM operations done.
[00:00:00.008,361] <dbg> pm: pm_system_suspend: No PM operations done.
[00:00:00.017,395] <dbg> pm: pm_system_suspend: No PM operations done.
[00:00:00.026,397] <dbg> net_ieee802154: ieee802154_init: (0x20002940): Initializing IEEE 802.15.4 stack on iface 0x200019f0
[00:00:00.038,574] <dbg> net_ieee802154: i802154_init: Interface auto start disabled.
*** Booting Zephyr OS build v4.3.0-rc3-5-gfbd15ecf9ebe ***
led(1)
[00:00:00.054,779] <dbg> net_ieee802154: ieee802154_enable: (0x20002940): iface 0x200019f0 up
[00:00:00.065,093] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed header size 15
[00:00:00.078,002] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed authtag size: 0
[00:00:00.091,186] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002940): Broadcast destination
[00:00:00.101,776] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(1): 1/0/0/0/1/0
[00:00:00.113,159] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(2): 0/0/2/1/3 - 195
[00:00:00.124,938] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002940): frag 0x20008828
[00:00:00.140,686] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 3 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:00.157,348] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 5 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:00.171,081] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed header size 15
[00:00:00.184,143] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed authtag size: 0
[00:00:00.197,296] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002940): Broadcast destination
[00:00:00.207,916] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(1): 1/0/0/0/1/0
[00:00:00.219,299] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(2): 0/0/2/1/3 - 196
[00:00:00.231,048] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002940): frag 0x20008828
[00:00:00.249,145] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 6 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:00.265,747] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 8 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:00.279,235] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed header size 15
[00:00:00.292,297] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed authtag size: 0
[00:00:00.305,450] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002940): Broadcast destination
[00:00:00.316,070] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(1): 1/0/0/0/1/0
[00:00:00.327,453] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(2): 0/0/2/1/3 - 197
[00:00:00.339,172] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002940): frag 0x20008828
[00:00:00.357,269] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 9 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:00.373,596] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 11 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:00.387,176] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed header size 15
[00:00:00.400,207] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002940): Computed authtag size: 0
[00:00:00.413,360] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002940): Broadcast destination
[00:00:00.423,980] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(1): 1/0/0/0/1/0
[00:00:00.435,363] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002940): fs(2): 0/0/2/1/3 - 198
[00:00:00.447,082] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002940): frag 0x20008828
[00:00:00.462,890] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 12 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:00.478,485] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 14 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:00.492,218] <inf> net_config: Initializing network
[00:00:01.492,279] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002ae0): Computed header size 15
[00:00:01.505,310] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002ae0): Computed authtag size: 0
[00:00:01.518,493] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002ae0): Broadcast destination
[00:00:01.529,083] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002ae0): fs(1): 1/0/0/0/1/0
[00:00:01.540,466] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002ae0): fs(2): 0/0/2/1/3 - 199
[00:00:01.552,215] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002ae0): frag 0x20008828
[00:00:01.565,673] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 15 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:01.581,909] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 17 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:02.595,611] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002ae0): Computed header size 15
[00:00:02.608,642] <dbg> net_ieee802154_frame: ieee802154_compute_header_and_authtag_len: (0x20002ae0): Computed authtag size: 0
[00:00:02.621,826] <dbg> net_ieee802154_frame: get_dst_addr_mode: (0x20002ae0): Broadcast destination
[00:00:02.632,415] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002ae0): fs(1): 1/0/0/0/1/0
[00:00:02.643,798] <dbg> net_ieee802154_frame: ieee802154_create_data_frame: (0x20002ae0): fs(2): 0/0/2/1/3 - 200
[00:00:02.655,548] <dbg> net_ieee802154: ieee802154_radio_send: (0x20002ae0): frag 0x20008828
[00:00:02.672,485] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 18 cmd: 3804 st: 3404 e: 0x4000000000000000
[00:00:02.688,720] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_tx_adv_callback: ch: 20 cmd: 3803 cs st: 3400 tx st: 3400 e: 0x2
[00:00:07.194,549] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 0002 e: 0x800000
[00:00:07.206,878] <dbg> ieee802154_cc13xx_cc26xx_subg: drv_rx_done: Received: len = 50, rssi = -49 status = 0
[00:00:07.218,444] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(1): 1/0/0/0/1/0
[00:00:07.229,644] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(2): 0/0/2/1/3 - 251
[00:00:07.241,210] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87b - mode 2 - pan id comp 0
[00:00:07.253,143] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87f - mode 3 - pan id comp 1
[00:00:07.265,045] <dbg> net_ieee802154_frame: validate_payload_and_mfr: (0x200021a8): Header size: 15, payload size 35
[00:00:07.277,374] <dbg> net_ieee802154_6lo_fragment: ieee802154_6lo_reassemble: (0x200021a8): No frag dispatch (7d)
[00:00:15.225,982] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 0002 e: 0x800000
[00:00:15.238,311] <dbg> ieee802154_cc13xx_cc26xx_subg: drv_rx_done: Received: len = 50, rssi = -48 status = 0
[00:00:15.249,877] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(1): 1/0/0/0/1/0
[00:00:15.261,077] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(2): 0/0/2/1/3 - 142
[00:00:15.272,644] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87b - mode 2 - pan id comp 0
[00:00:15.284,576] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87f - mode 3 - pan id comp 1
[00:00:15.296,508] <dbg> net_ieee802154_frame: validate_payload_and_mfr: (0x200021a8): Header size: 15, payload size 35
[00:00:15.308,807] <dbg> net_ieee802154_6lo_fragment: ieee802154_6lo_reassemble: (0x200021a8): No frag dispatch (7d)
[00:00:18.052,703] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 0002 e: 0x800000
[00:00:18.065,002] <dbg> ieee802154_cc13xx_cc26xx_subg: drv_rx_done: Received: len = 50, rssi = -56 status = 0
[00:00:18.076,568] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(1): 1/0/0/0/1/0
[00:00:18.087,768] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(2): 0/0/2/1/3 - 123
[00:00:18.099,334] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87b - mode 2 - pan id comp 0
[00:00:18.111,267] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87f - mode 3 - pan id comp 1
[00:00:18.123,199] <dbg> net_ieee802154_frame: validate_payload_and_mfr: (0x200021a8): Header size: 15, payload size 35
[00:00:18.135,498] <dbg> net_ieee802154_6lo_fragment: ieee802154_6lo_reassemble: (0x200021a8): No frag dispatch (7d)
[00:00:24.545,074] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 0002 e: 0x800000
[00:00:24.557,373] <dbg> ieee802154_cc13xx_cc26xx_subg: drv_rx_done: Received: len = 50, rssi = -50 status = 0
[00:00:24.568,939] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(1): 1/0/0/0/1/0
[00:00:24.580,139] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(2): 0/0/2/1/3 - 124
[00:00:24.591,735] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87b - mode 2 - pan id comp 0
[00:00:24.603,668] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87f - mode 3 - pan id comp 1
[00:00:24.615,570] <dbg> net_ieee802154_frame: validate_payload_and_mfr: (0x200021a8): Header size: 15, payload size 35
[00:00:24.627,868] <dbg> net_ieee802154_6lo_fragment: ieee802154_6lo_reassemble: (0x200021a8): No frag dispatch (7d)
[00:00:26.227,630] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 0002 e: 0x800000
[00:00:26.239,929] <dbg> ieee802154_cc13xx_cc26xx_subg: drv_rx_done: Received: len = 50, rssi = -55 status = 0
[00:00:26.251,495] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(1): 1/0/0/0/1/0
[00:00:26.262,725] <dbg> net_ieee802154_frame: ieee802154_validate_fc_seq: (0x200021a8): fs(2): 0/0/2/1/3 - 43
[00:00:26.274,200] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87b - mode 2 - pan id comp 0
[00:00:26.286,132] <dbg> net_ieee802154_frame: validate_addr: (0x200021a8): Buf 0x2000a87f - mode 3 - pan id comp 1
[00:00:26.298,034] <dbg> net_ieee802154_frame: validate_payload_and_mfr: (0x200021a8): Header size: 15, payload size 35
[00:00:26.310,333] <dbg> net_ieee802154_6lo_fragment: ieee802154_6lo_reassemble: (0x200021a8): No frag dispatch (7d)
[00:00:27.499,847] <err> net_config: Timeout while waiting network setup
[00:00:27.507,995] <err> net_config: Network initialization failed (-116)
led(0)
Reached main()
Link local IPv6: fe80::212:4b00:29b9:9ace
Sleep 1 second
led(1)
Setting up ADC
[00:00:28.526,763] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_channel_setup: Setup 9 acq time 9
Setting up ADC sequence
Reading ADC
[00:00:28.540,679] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000480 fifo 0x00000000
[00:00:28.551,452] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ADC buf 20007B8E val 3109
[00:00:28.561,218] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000400 fifo 0x00000001
an_mb1_val: 3263
led(0)
[00:00:28.574,645] <dbg> ieee802154_cc13xx_cc26xx_subg: cmd_prop_rx_adv_callback: ch: 21 cmd: 3804 st: 3405 e: 0x2000000000000000
Setting up ADC
[00:00:29.589,721] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_channel_setup: Setup 9 acq time 9
Setting up ADC sequence
Reading ADC
```
