// Wed Jun  7 01:08:31 UTC 2017
// 4735-a0a

// Tue Jun  6 22:16:24 UTC 2017
// 4733-a9b

#include <Arduino.h>
#include "../../yaffa.h"
#include "quit.h"
// #include "Error_Codes.h"

#ifdef KERNEL_QUIT

// this is kernel stuff -- leave alone

#endif // #ifdef KERNEL_QUIT

// const char quit_str[] = "quit";
extern const char quit_str[]; // = "quit";
void _quit(void) {
  rStack_clear();
  *cpToIn = 0;          // Terminate buffer to stop interpreting
  Serial.flush();
}

// EOF
