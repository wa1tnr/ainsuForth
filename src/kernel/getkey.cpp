// Sat Jun 24 17:00:15 UTC 2017
// 4735-a0r-01-

// modified getKey() Sat Jun 24, for suppression of ASCII_NL echo to console.

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
          inChar == ASCII_NL  ||   // new - ainsuForth
          inChar == ASCII_ESC || isprint(inChar)) {
        return inChar; 
      }
    }
  }
}

#endif

#ifdef IMPROVED_FCN_ZZED

// code will be formatted like this, next iteration:

char getKey_SNIPPET(void) {
      if (inChar == ASCII_BS  ||
          inChar == ASCII_TAB ||
          inChar == ASCII_CR  ||  
          inChar == ASCII_NL  ||   // new
          inChar == ASCII_ESC ||
          isprint(inChar)) {
        return inChar; 
}

#endif

