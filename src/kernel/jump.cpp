// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#include <Arduino.h>
#include "../../yaffa.h"
#include "jump.h"
// #include "Error_Codes.h"

#ifdef KERN_JUMP
/**  File: Dictionary.ino                                                    **/
const char jump_str[] = "jump";
void _jump(void) {
  ip = (cell_t*)((size_t)ip + *ip);
}

#endif
