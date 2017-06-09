// Wed Jun  7 21:40:26 UTC 2017
// 4735-a0e

#include <Arduino.h>
#include "../../yaffa.h"
// #include "loop_sys.h"
// #include "Error_Codes.h"

#ifdef KERN_LOOP_SYS
const char loop_sys_str[] = "loop-sys";
void _loop_sys(void) {
  cell_t limit = rStack_pop();    // fetch limit
  cell_t index = rStack_pop();    // fetch index
  index++;
  if (limit - index) {
    rStack_push(index);
    rStack_push(limit);
    ip = (cell_t*)*ip;
  } else {
    ip++;
    if (rStack_pop() != LOOP_SYS) {
      dStack_push(-22);
      _throw();
      return;
    }
  }
}

#endif
