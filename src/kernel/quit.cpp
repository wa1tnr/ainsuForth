// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#include <Arduino.h>
#include "../../yaffa.h"
#include "quit.h"
// #include "Error_Codes.h"

#ifdef KERNEL_QUIT

// this is kernel stuff -- leave alone

#endif // #ifdef KERNEL_QUIT

// const char quit_str[] = "quit";
const char quit_str[] = "quit";
void _quit(void) {
  rStack_clear();
  *cpToIn = 0;          // Terminate buffer to stop interpreting
  Serial.flush();
}

// EOF
