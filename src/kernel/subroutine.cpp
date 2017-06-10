// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#include <Arduino.h>
#include "../../yaffa.h"
#include "subroutine.h"
// #include "Error_Codes.h"

#ifdef KERN_SUBROUTINE
const char subroutine_str[] = "subroutine";
void _subroutine(void) {
  *pDoes = (cell_t)*ip++;
}

#endif
