// Sun Jun 18 15:04:16 UTC 2017
// 4735-a0m

#include <Arduino.h>
#include "../../yaffa.h"
// #include "../../Error_Codes.h"

#ifdef EXT_KERN_GETKEY
#include "getkey.h"
/******************************************************************************/
/** getKey                                                                   **/
/**   waits for the next valid key to be entered and return its value        **/
/**   Valid characters are:  Backspace, Carriage Return, Escape, Tab, and    **/
/**   standard printable characters                                          **/
/******************************************************************************/
char getKey(void) {
  char inChar;

  while (1) {
    if (Serial.available()) {
      inChar = Serial.read();
      if (inChar == ASCII_BS || inChar == ASCII_TAB || inChar == ASCII_CR || 
          inChar == ASCII_ESC || isprint(inChar)) {
        return inChar; 
      }
    }
  }
}

#endif
