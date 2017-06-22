// Thu Jun 22 20:49:39 UTC 2017
// 4735-a0p-04-

#include <Arduino.h>
#include "../../yaffa.h"
#include "../../flashDict.h"  // required?
#include "../../Dictionary.h" // provides: #include "iasmd.h"
// #include "../../Error_Codes.h"

/*******************************************************************************/
/**                          Core Forth Words                                 **/
/*******************************************************************************/
const char store_str[] = "!";
// ( x a-addr --)
// Store x at a-addr
void _store(void) { 
  cell_t* address = (cell_t*)dStack_pop();
  *address = dStack_pop();
}

const char fetch_str[] = "@";
// ( a-addr -- x1 )
// Fetch cell x1 at a-addr.
void _fetch(void) {
  cell_t* address = (cell_t*)dStack_pop();
  dStack_push(*address);
}

/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**                                                                          **/
/**  File: Dictionary.ino                                                    **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/******************************************************************************/
