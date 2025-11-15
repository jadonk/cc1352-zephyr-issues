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
[00:00:00.000,823] <dbg> pm: pm_system_suspend: No PM operations done.
[00:00:00.008,331] <dbg> pm: pm_system_suspend: No PM operations done.
*** Booting Zephyr OS build v4.3.0-rc3-5-gfbd15ecf9ebe ***
led(1)
led(0)
Reached main()
led(1)
Setting up ADC
[00:00:28.055,755] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_channel_setup: Setup 9 acq time 9
Setting up ADC sequence
Reading ADC
[00:00:28.069,671] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000480 fifo 0x00000000
[00:00:28.080,474] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ADC buf 20007AFE val 3110
[00:00:28.090,209] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000400 fifo 0x00000001
an_mb1_val: 3264
led(0)
Setting up ADC
[00:00:29.105,255] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_channel_setup: Setup 9 acq time 9
Setting up ADC sequence
Reading ADC
[00:00:29.119,171] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000480 fifo 0x00000000
[00:00:29.129,943] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ADC buf 20007AFE val 3099
[00:00:29.139,709] <dbg> adc_cc13xx_cc26xx: adc_cc13xx_cc26xx_isr: ISR flags 0x00000400 fifo 0x00000001
an_mb1_val: 3253
Exiting main()
```
