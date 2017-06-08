// Wed Jun  7 21:40:26 UTC 2017
// 4735-a0e

#include <Arduino.h>
#include "../../yaffa.h"
#include "do_sys.h"  // necessary for the '#ifdef KERN_DO_SYS' found below.
// #include "Error_Codes.h"

#ifdef KERN_DO_SYS
const char do_sys_str[] = "do-sys"; // this ported .cpp gets the real one
// ( n1|u1 n2|u2 -- ) (R: -- loop_sys )
// Set up loop control parameters with index n2|u2 and limit n1|u1. An ambiguous
// condition exists if n1|u1 and n2|u2 are not the same type. Anything already
// on the return stack becomes unavailable until the loop-control parameters
// are discarded.
void _do_sys(void) { // this ported .cpp gets the real one

// these functions must be declared in the .h file corresponding to this file.
  rStack_push(LOOP_SYS);
  rStack_push(dStack_pop());   // push index on to return stack
  rStack_push(dStack_pop());   // push limit on to return stack
}

#endif
