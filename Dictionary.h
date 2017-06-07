// Wed Jun  7 01:08:31 UTC 2017
// 4735-a0a

// Tue Jun  6 22:16:24 UTC 2017
// 4733-a9b

#include "src/kernel/quit.h"

/**  File: YAFFA-ARM.ino                                                            **/

// 114 /******************************************************************************/
// 115 /** Global Variables                                                         **/
// 116 /******************************************************************************/
// 117 //forthSpace_t fs;  // Creates the forth space structure
// 118 

/******************************************************************************/
/**  Text Buffers and Associated Registers                                   **/
/******************************************************************************/

// 122 char* cpSource;                 // Pointer to the string location that we will
// 123                                 // evaluate. This could be the input buffer or
// 124                                 // some other location in memory
// 125 char* cpSourceEnd;              // Points to the end of the source string
// 126 char* cpToIn;                   // Points to a position in the source string
// 127                                 // that was the last character to be parsed
// 128 char cDelimiter = ' ';          // The parsers delimiter
// 129 char cInputBuffer[BUFFER_SIZE]; // Input Buffer that gets parsed
// 130 char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

// 131 
// 132 /******************************************************************************/
// 133 /**  Stacks and Associated Registers                                         **/


/**  File: YAFFA-ARM.ino                                                            **/
// 166 /******************************************************************************/
// 167 /** Error Handling                                                           **/
// 168 /******************************************************************************/
// 169 int8_t errorCode = 0;

extern int8_t errorCode ; // = 0;


/**  File: YAFFA-ARM.ino                                                            **/
// 171 /******************************************************************************/
// 172 /**  Forth Space (Name, Code and Data Space) and Associated Registers        **/
// 173 /******************************************************************************/

// 176 cell_t* pHere;               // HERE, points to the next free position in
// 177                              // Forth Space

extern cell_t* pHere;        // HERE, points to the next free position in
                             // Forth Space

/**  File: YAFFA-ARM.ino                                                            **/
// 182 /******************************************************************************/
// 183 /** Forth Global Variables                                                   **/
// 184 /******************************************************************************/
// 185 uint8_t state; // Holds the text interpreters compile/interpreter state

extern uint8_t state; // Holds the text interpreters compile/interpreter state

// 186 cell_t* ip;   // Instruction Pointer
// 187 cell_t w;     // Working Register
// 188 uint8_t base;  // stores the number conversion radix



/**  File: YAFFA-ARM.ino                           **/
// 665 /*********************************************/
// 666 /** Pop (remove) a cell from the stack      **/
// 667 /*********************************************/
// 668 cell_t dStack_pop(void) {
// 669   if (dStack.top > 0) {
// 670     return (dStack.d[dStack.top--]);
// 671   } else {
// 672     dStack_push(-4);
// 673     _throw();
// 674   }
// 675   return 0;
// 676 }

// 668 cell_t dStack_pop(void) {
extern cell_t dStack_pop(void);
extern void dStack_clear(void);

