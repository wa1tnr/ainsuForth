// Fri Jun 23 20:27:20 UTC 2017
// 4735-a0r-00-

#include <Arduino.h>
#include "yaffa.h"
#include "ainsuForthsketch.h"
// #include "neo_pixel.h"
#include "Error_Codes.h"

/******************************************************************************/
/** Major and minor revision numbers                                         **/
/******************************************************************************/
#define YAFFA_MAJOR 0
#define YAFFA_MINOR 7
#define MAKESTR(a) #a
#define MAKEVER(a, b) MAKESTR(a*256+b)
asm(" .section .version\n"
    "yaffa_version: .word " MAKEVER(YAFFA_MAJOR, YAFFA_MINOR) "\n"
    " .section .text\n");

/******************************************************************************/
/** Common Strings & Terminal Constants                                      **/
/******************************************************************************/
const char prompt_str[] = ""; // const char prompt_str[] = ">> ";
const char compile_prompt_str[] = "|  ";
const char ok_str[] = " ok";


// const char sp_str[] = " ";
// const char tab_str[] = "\t";
// const char hexidecimal_str[] = "$";
// const char octal_str[] = "0";
// const char binary_str[] = "%";
// const char zero_str[] = "0";

/******************************************************************************/
/** Global Variables                                                         **/
/******************************************************************************/

/******************************************************************************/
/**  Text Buffers and Associated Registers                                   **/
/******************************************************************************/
char* cpSource;                 // Pointer to the string location that we will
                                // evaluate. This could be the input buffer or
                                // some other location in memory
char* cpSourceEnd;              // Points to the end of the source string
char* cpToIn;                   // Points to a position in the source string
                                // that was the last character to be parsed
char cDelimiter = ' ';          // The parsers delimiter
char cInputBuffer[BUFFER_SIZE]; // Input Buffer that gets parsed
char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

/******************************************************************************/
/**  Stacks and Associated Registers                                         **/
/**                                                                          **/
/**  Control Flow Stack is virtual right now. But it may be but onto the     **/
/**  data stack. Error checking should be done to make sure the data stack   **/
/**  is not corrupted, i.e. the same number of items are on the stack as     **/
/**  at the end of the colon-sys as before it is started.                    **/
/******************************************************************************/
// stack_t dStack;
// stack_t rStack;
/******************************************************************************/
/**  Flash Dictionary Structure                                              **/
/******************************************************************************/
const flashEntry_t* pFlashEntry = flashDict;   // Pointer into the flash Dictionary

/******************************************************************************/
/**  User Dictionary is stored in name space.                                **/
/******************************************************************************/
userEntry_t* pLastUserEntry = NULL;
userEntry_t* pUserEntry = NULL;
userEntry_t* pNewUserEntry = NULL;

/******************************************************************************/
/**  Flags - Internal State and Word                                         **/
/******************************************************************************/
uint8_t flags;                 // Internal Flags
uint8_t wordFlags;             // Word flags

/******************************************************************************/
/** Error Handling                                                           **/
/******************************************************************************/
int8_t errorCode = 0; // ainsuForth: stays.

/******************************************************************************/
/**  Forth Space (Name, Code and Data Space) and Associated Registers        **/
/******************************************************************************/
char* pPNO;                  // Pictured Numeric Output Pointer
cell_t forthSpace[FORTH_SIZE]; // Reserve a block on RAM for the forth environment
cell_t* pHere;               // HERE, points to the next free position in
                             // Forth Space
cell_t* pOldHere;            // Used by "colon-sys"
cell_t* pCodeStart;          // used by "colon-sys" and RECURSE
cell_t* pDoes;               // Used by CREATE and DOES>

/******************************************************************************/
/** Forth Global Variables                                                   **/
/******************************************************************************/
uint8_t state; // Holds the text interpreters compile/interpreter state
cell_t* ip;   // Instruction Pointer
cell_t w;     // Working Register
uint8_t base;  // stores the number conversion radix

/******************************************************************************/


/******************************************************************************/
/** Initialization                                                           **/
/******************************************************************************/
void setup(void) {                
  uint16_t mem;
  Serial.begin(19200);     // Open serial communications:

  flags = ECHO_ON;
  base = DECIMAL;

  pHere = &forthSpace[0];
  pOldHere = pHere;
  
  Serial.print("\n warm boot message - early bird.  //  KEPOK  FEVORE--PARKEFF"); // instant confirmation

  delay(9 * 100); // 900 ms - optional - useful when coded for a 4+ second delay
                  // to give the operator time to task switch from upload
                  // to first signon.
  signOn();
  Serial.print(prompt_str);
}


/******************************************************************************/
/** Outer interpreter                                                        **/
/******************************************************************************/
void loop(void) {
  cpSource = cpToIn = cInputBuffer;
  cpSourceEnd = cpSource + getLine(cpSource, BUFFER_SIZE);
  if (cpSourceEnd > cpSource) {
      interpreter();
    if (errorCode) {
        errorCode = 0;
    } else {
      if (!state) {
        Serial.print(ok_str);
//        // This shows a DOT for each item on the data stack
        char i = dStack_size();
        while(i--) {
            Serial.print(".");
        }
        Serial.println();
      }
    }
  }
  if (state) {
	Serial.print(compile_prompt_str);
  } else {
	Serial.print(prompt_str);
  }
}


/******************************************************************************/
/** freeMem returns the amount of free forth space left.                     **/
/******************************************************************************/
static unsigned int freeMem(void) {
//   return (pHere - forthSpace);
}

// #ifdef INT_KERN_XTTONAME
// char* xtToName(cell_t xt) { } #endif
// #endif

/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**  Version 0.7.0                                                           **/
/**                                                                          **/
/**  File: YAFFA.ino                                                         **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/**                                                                          **/
/**  This file is part of YAFFA.                                             **/
/**                                                                          **/
/**  YAFFA is free software: you can redistribute it and/or modify           **/
/**  it under the terms of the GNU General Public License as published by    **/
/**  the Free Software Foundation, either version 2 of the License, or       **/
/**  (at your option) any later version.                                     **/
/**                                                                          **/
/**  YAFFA is distributed in the hope that it will be useful,                **/
/**  but WITHOUT ANY WARRANTY; without even the implied warranty of          **/
/**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           **/
/**  GNU General Public License for more details.                            **/
/**                                                                          **/
/**  You should have received a copy of the GNU General Public License       **/
/**  along with YAFFA.  If not, see <http://www.gnu.org/licenses/>.          **/
/**                                                                          **/
/******************************************************************************/
/**                                                                          **/
/**  DESCRIPTION:                                                            **/
/**                                                                          **/
/**  YAFFA is an attempt to make a Forth environment for the Arduino that    **/
/**  is as close as possible to the ANSI Forth draft specification DPANS94.  **/
/**                                                                          **/
/**  The goal is to support at a minimum the ANS Forth C core word set and   **/
/**  to implement wrappers for the basic I/O functions found in the Arduino  **/
/**  library.                                                                **/
/**                                                                          **/
/**  YAFFA uses two dictionaries, one for built in words and is stored in    **/
/**  flash memory, and the other for user defined words, that is found in    **/
/**  RAM.                                                                    **/
/**                                                                          **/
/******************************************************************************/
