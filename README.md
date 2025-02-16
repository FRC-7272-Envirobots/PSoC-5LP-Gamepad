# PSoC-5LP-Gamepad

This repo contains a PSoC Creator workspace that programs the Infineon (formerly Cypress) CY8CKIT-059 PSoC 5LP Prototyping Kit to send 32 buttons to the FIRST Driver Station.

# Using the Device

Connect the micro USB (not the USB-A) to the Driver Station computer. It should appear as a controller named "CyController".

For each button, wire a normally-open switch with VDD applied to the input, and the output connected to an input pin on the PSoC device. 

The pin number for each logical button number is:

Button | Pin
--- | ---
1 | 0.0
2 | 0.1
3 | 0.2
4 | 0.3
5 | 0.4
6 | 0.5
7 | 0.6
8 | 0.7
9 | 2.0
10 | 2.1
11 | 2.2
12 | 2.3
13 | 2.4
14 | 2.5
15 | 2.6
16 | 2.7
17 | 3.0
18 | 3.1
19 | 3.2
20 | 3.3
21 | 3.4
22 | 3.5
23 | 3.6
24 | 3.7
25 | 1.2 (note - starts at 2 not 0)
26 | 1.3
27 | 1.4
28 | 1.5
29 | 1.6
30 | 1.7
31 | 12.2 (note - starts at 2 not 0)
32 | 12.3


# Programming the PSoC Device

Plug the PSoC device into the computer with the USB A side (not the micro USB). Install PSoC Creator and open the project in this folder. Click the Program icon, it looks like an IC chip with 0010 on top of it.

# Miscellaneous Information

32 buttons is the maximum that works with the Driver Station and WPILib. Note that the pin and device layout in the project has more registers than 32, from before I knew that :)

Each pin has an internal pull-down resistor. The button is considered activated when the pin is driven high, and deactivated when it is driven low or left open.

Helpful information about the USB HID spec and how to program is [here](https://www.infineon.com/dgdl/Infineon-AN57473_USB_HID_Basics_with_PSoC_3_and_PSoC_5LP-ApplicationNotes-v12_00-EN.pdf?fileId=8ac78c8c7cdc391c017d072d9ba7525f)

This was based on a repo from team 623 that had the original release from Cypress / Infineon, which was published under GPL v3.