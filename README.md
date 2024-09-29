# grblHAL for Blot

A grblHAL driver for the [Blot](https://github.com/hackclub/blot/) plotter by Hackclub.

Allows the control of the Blot plotter using G-code commands. (Except for the pen servo)

## Configuration

Configure the Blot plotter with these settings:
```gcode
$0=10
$100=80
$101=80
$110=1000
$111=1000
$120=100
$121=100
$130=120
$131=120
```

If you have limit switches, enable homing with the following commands:
```gcode
$22=1
$23=3
$44=1
$45=2
$46=0
```

If you don't have limit switches, you can disable the switches with this command:
```gcode
$5=3
```

Make sure the Machine Moves to the correct direction, -x and -y should move the pen to the left and down respectively.
If that is not the case try flipping the motor connectors or swapping the wires.

## Installation and Building

See Releases for compiled firmware.

To install, download the firmware, insert the USB cable into the Blot while holding the Boot button, marked with a `B` on the board. The Blot will show up as a USB drive, drag the firmware file onto the drive. The Blot will restart and the firmware will be updated.

For Building instructions see [grblHAL RP2040](https://github.com/grblHAL/RP2040).
__Note:__ Before building, you need to change `#define COREXY Off` to `#define COREXY On` in `grbl/config.h`.