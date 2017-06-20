// Tue Jun 20 21:33:06 UTC 2017
// 4735-a0p-02-

#include <Arduino.h>
#include "../../yaffa.h"
// #include "../../Error_Codes.h"

#ifdef EXT_KERN_STRINGS
#include "strings.h"

const char sp_str[] = " ";
const char hexidecimal_str[] = "$";
const char octal_str[] = "0";
const char binary_str[] = "%";

/******************************************************************************/
/** String and Serial Functions                                              **/
/******************************************************************************/
void displayValue(void) {
  switch (base) {
    case DECIMAL: 
      Serial.print(w, DEC);
      break;
    case HEXIDECIMAL:
      Serial.print(hexidecimal_str); 
      Serial.print(w, HEX);
      break;
    case OCTAL:
      Serial.print(octal_str); 
      Serial.print(w, OCT);
      break;
    case BINARY:  
      Serial.print(binary_str); 
      Serial.print(w, BIN);
      break;
  }
  Serial.print(sp_str);
}

#endif
