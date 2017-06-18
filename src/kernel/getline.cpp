// Sun Jun 18 15:04:16 UTC 2017
// 4735-a0m

#include <Arduino.h>
#include "../../yaffa.h"
// #include "../../Error_Codes.h"

#ifdef EXT_KERN_GETLINE
#include "getline.h"
/******************************************************************************/
/** getLine                                                                  **/
/**   read in a line of text ended by a Carriage Return (ASCII 13)           **/
/**   Valid characters are:  Backspace, Carriage Return, Escape, Tab, and    **/
/**   standard printable characters. Passed the address to store the string, **/
/**   and Returns the length of the string stored                            **/
/******************************************************************************/
uint8_t getLine(char* ptr, uint8_t buffSize) {
  char inChar;
  uint8_t count = 0;
  do {
    inChar = getKey();
    if (inChar == ASCII_BS) {
      if (count) {
        *--ptr = 0;
        if (flags & ECHO_ON) Serial.print("\b \b");
      }
    } else if (inChar == ASCII_TAB || inChar == ASCII_ESC) {
      if (flags & ECHO_ON) Serial.print("\a"); // Beep
    } else if (inChar == ASCII_CR) {
      if (flags & ECHO_ON) Serial.println();
      break;
    } else {
      if (flags & ECHO_ON) Serial.print(inChar);
      *ptr++ = inChar;
      *ptr = 0;
      count++;
    }
  } while (count < buffSize);
  return (count);
}

#endif
