// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#include <Arduino.h>
#include "../../yaffa.h"
#include "leave_sys.h"
// #include "Error_Codes.h"

#ifdef KERN_LEAVE_SYS
const char leave_sys_str[] = "leave-sys";
void _leave_sys(void) {
  rStack_pop();    // fetch limit
  rStack_pop();    // fetch index
  if (rStack_pop() != LOOP_SYS) {
    dStack_push(-22);
    _throw();
    return;
  }
  ip = (cell_t*)*ip;
}

#endif
