// Sun Nov 19 02:36:45 UTC 2017
// 4735-b0c-07-   the -07- is new Nov 19, 2017.

// previous timestamp:
// Wed Aug  2 18:04:12 UTC 2017
// 
// compiled without change in November 2017, presumably for the Gemma M0 from Adafruit:
// 
// "/home/x/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/bin/arm-none-eabi-objcopy" -O ihex -R .eeprom  "/tmp/arduino_build_x/ainsuForth.ino.elf" "/tmp/arduino_build_x/ainsuForth.ino.hex"
// Bootloader file specified but missing: /home/x/.arduino15/packages/adafruit/hardware/samd/1.0.18/bootloaders/gemma/samd21_sam_ba.bin
// Using library Adafruit_DotStar at version 1.0.2 in folder: /home/x/Arduino/libraries/Adafruit_DotStar 
// Using library SPI at version 1.0 in folder: /home/x/.arduino15/packages/adafruit/hardware/samd/1.0.18/libraries/SPI 
// Sketch uses 19232 bytes (7%) of program storage space. Maximum is 262144 bytes.

// Note: assume obfuscation of the directories those paths are descended from.

// above indicates good compile for Gemma M0, which should have the dotstar hardware (verify this).

// purpose of build: just to reacquaint and determine which (of many) targets was last built.  Going on the theory that the Gemma M0 was the most recent target board.

// packages/adafruit/hardware/samd/1.0.18/boards.txt:173:adafruit_gemma_m0.build.extra_flags=-DCRYSTALLESS -DADAFRUIT_GEMMA_M0 -D__SAMD21E18A__ {build.usb_flags}

// In July 2017, all boards were SAMD21G18A except Gemma M0, which is SAMD21E18A (similar inside, fewer pins brought out?)

// GEMMA M0
// + dotstar x1
// CRYSTALLESS   ADAFRUIT_GEMMA_M0   __SAMD21E18A__

// FEATHER M0
// ARDUINO_SAMD_ZERO __SAMD21G18A__

// FEATHER M0 EXPRESS
// + npx x1  + SPI flash 2MB
// ARDUINO_SAMD_ZERO ARDUINO_SAMD_FEATHER_M0 ADAFRUIT_FEATHER_M0_EXPRESS __SAMD21G18A__ 

// RADIO M0 (Feather ..)
// __SAMR21G18A__ 

// METRO M0 (Metro M0 Express)
// + npx x1  + SPI flash 2MB
// __SAMD21G18A__  ARDUINO_SAMD_ZERO ADAFRUIT_METRO_M0_EXPRESS 


// CPX - Circuit Playground M0 (Circuit Playground Express)
// + npx x10  + SPI flash 2MB
// CRYSTALLESS ARDUINO_SAMD_ZERO __SAMD21G18A__ ADAFRUIT_CIRCUITPLAYGROUND_M0

