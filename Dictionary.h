// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#include "src/kernel/do_sys.h"
#include "src/kernel/dot_quote.h"
#include "src/kernel/drop.h"
#include "src/kernel/eq.h"
#include "src/kernel/exit.h"
#include "src/kernel/fake_header.h" // fake header
#include "src/kernel/jump.h"
#include "src/kernel/leave_sys.h"
#include "src/kernel/literal.h"
#include "src/kernel/loop_sys.h"
#include "src/kernel/over.h"
#include "src/kernel/plus_loop_sys.h"
#include "src/kernel/quit.h"
#include "src/kernel/s_quote.h"
#include "src/kernel/subroutine.h"
#include "src/kernel/throw.h"
#include "src/kernel/type.h"
#include "src/kernel/variable.h"
#include "src/kernel/warm.h"
#include "src/kernel/zjump.h"


/**  File: YAFFA-ARM.ino                                                            **/

extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on
extern int8_t errorCode ; // = 0;
extern cell_t* pHere;        // HERE, points to the next free position in
                             // Forth Space
extern uint8_t state; // Holds the text interpreters compile/interpreter state
extern cell_t dStack_pop(void);
extern void dStack_clear(void);

