// Tue Jun 20 03:39:44 UTC 2017
// 4735-a0m-02

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
const char prompt_str[] = ">> ";
const char compile_prompt_str[] = "|  ";
const char ok_str[] = " OK";


const char spS_str[] = " ";  // kludge - renamed to make it unique
const char tab_str[] = "\t";
const char hexidecimal_str[] = "$";
const char octal_str[] = "0";
const char binary_str[] = "%";
const char zero_str[] = "0";

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
  
  Serial.print("\n warm boot message - early bird.  //  KEPOK  FILVA-MELFON"); // instant confirmation

  delay(9 * 100); // 900 ms - optional - useful when coded for a 4+ second delay
                  // to give the operator time to task switch from upload
                  // to first signon.

  // colours - entirely optional
  Serial.print("\033\133"); // ESC [
  Serial.print("\063\063"); // 33 - yellow fg
  Serial.print("m");        // for the stanza

  Serial.print("\033\133"); // ESC [
  Serial.print("\064\064"); // 44 - blue bg
  Serial.print("m");        // for the stanza

// 203   Serial.print("\033\133"); // ESC [
// 204 
// 205   Serial.print("\063\063"); // 33 - yellow fg
// 206   Serial.print("m");        // for the stanza
// 207 
// 208   Serial.print("\033\133"); // ESC [
// 209 
// 210   Serial.print("\064\064"); // 44 - blue bg
// 211   Serial.print("m");        // for the stanza






  // Serial.print("\n YAFFA - Yet Another Forth For Arduino, ");

//  Serial.print("Version ");
//  Serial.print(YAFFA_MAJOR,DEC);
//  Serial.print(".");
//  Serial.println(YAFFA_MINOR,DEC);


    Serial.print("\033\133"); // ESC [
    Serial.print("\064\060"); // 40 - black bg
    Serial.print("m");        // for the stanza

    Serial.print("\n\n   ");  // leading black space on the wa1tnr line



    Serial.print("\033\133"); // ESC [
    Serial.print("\064\064"); // 44 - blue bg
    Serial.print("m");        // for the stanza


    Serial.print("  ainsuForth - 2017 - wa1tnr  ");

    Serial.print("\033\133"); // ESC [
    Serial.print("\064\060"); // 40 - black bg
    Serial.print("m");        // for the stanza
    Serial.print("  words: ");
    pFlashEntry = flashDict;
    w = 0;
    while (pFlashEntry->name) { // Good for the Zero
      w++;
      pFlashEntry++;
    }
    Serial.print(w);


    Serial.print("  \n         YAFFA - Yet Another Forth For Arduino, \n");


    Serial.print("         Copyright (C) 2012 Stuart Wood\n");

//  Serial.print(" This program comes with ABSOLUTELY NO WARRANTY.\r\n");
//  Serial.print(" This is free software, and you are welcome to\r\n");
//  Serial.println(" redistribute it under certain conditions.\r\n");
  
//  Serial.print(" Processor is a ");
//  Serial.println(PROC_STR);
//  Serial.print(" Terminal Echo is ");
//  Serial.print(flags & ECHO_ON ? "On\r\n" : "Off\r\n");
//  Serial.print(" Pre-Defined Words : ");


//  Serial.println("\r\n Environment Parameters: ");
//  Serial.print(" Counted String Length: \t");
//  Serial.print(BUFFER_SIZE);
//  Serial.println(" Bytes");
//  Serial.print(" Pict. Num. Output Length: \t");
//  Serial.print(HOLD_SIZE);
//  Serial.println(" Bytes");
//  Serial.print(" Scratch Pad size: \t\t");
//  Serial.print(PAD_SIZE);
//  Serial.println(" Bytes");
//  Serial.print(" Address Size: \t\t\t");
//  Serial.print(sizeof(void*) * 8);
//  Serial.println(" Bits");
//  Serial.print(" Core Word set: \t\t");
//  Serial.println(CORE ? "TRUE" : "FALSE");
//  Serial.print(" Ext. Core Word set: \t\t");
//  Serial.println(CORE_EXT ? "TRUE" : "FALSE");
//  Serial.print(" Floored Division: \t\t");
//  Serial.println(FLOORED ? "TRUE" : "FALSE");
//  Serial.print(" Max. Char Value: \t\t");
//  Serial.print(MAX_CHAR);
//  Serial.println(" Dec.");
#ifdef DOUBLE
//  Serial.print(" Max. Signed Double: \t\t");
//  Serial.print(MAX_OF(dcell_t));
//  Serial.println(" Dec.");
#endif
//  Serial.print(" Max. Singed Integer: \t\t");
//  Serial.print(MAX_OF(cell_t));
//  Serial.println(" Dec.");
//  Serial.print(" Max. unsigned Integer: \t");
//  Serial.print(MAX_OF(ucell_t));
//  Serial.println(" Dec.");
//  Serial.print(" Max. Return Stack Size: \t");
//  Serial.print(RSTACK_SIZE);
//  Serial.println(" Cells");
//  Serial.print(" Max. Data Stack Size: \t\t");
//  Serial.print(STACK_SIZE);
//  Serial.println(" Cells");

//  Serial.print("\r\n Input Buffer: Size ");
//  Serial.print(BUFFER_SIZE);
//  Serial.print(" Bytes, Starts at $");
//  Serial.print((size_t)cInputBuffer[0], HEX);
//  Serial.print(", Ends at $");
//  Serial.println((size_t)cInputBuffer[BUFFER_SIZE] - 1, HEX);

//  Serial.print(" Token Buffer: Size ");
//  Serial.print(WORD_SIZE);
//  Serial.print(" Bytes, Starts at $");
//  Serial.print((size_t)&cTokenBuffer[0], HEX);
//  Serial.print(", Ends at $");
//  Serial.println((size_t)&cTokenBuffer[WORD_SIZE] - 1, HEX);

//  Serial.print(" Forth Space: Size ");
//  Serial.print(FORTH_SIZE);
//  Serial.print(" Cells, Starts at $");
//  Serial.print((size_t)&forthSpace[0], HEX);
//  Serial.print(", Ends at $");
//  Serial.println((size_t)&forthSpace[FORTH_SIZE] - 1, HEX);


  Serial.print(prompt_str);
}


#ifdef INT_KERN_GETKEY
#endif

#ifdef INT_KERN_GETLINE
#endif


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


#ifdef INT_KERN_EXEC_WORD
/******************************************************************************/
/** Virtual Machine that executes Code Space                                 **/
/******************************************************************************/
void executeWord(void) {
//   func function;
//   flags |= EXECUTE;
//   while (ip != NULL) {
//     w = *ip++;
//     if (w > 255) {
      // ip is an address in code space
//       rStack_push((size_t)ip); // push the address to return to
//       ip = (cell_t*)w;          // set the ip to the new address
//     }
//     else {
//       function = flashDict[w - 1].function;
//       function();
//       if (errorCode) return;
//     }
//   }
//   flags &= ~EXECUTE;
}
#endif


/******************************************************************************/
/** freeMem returns the amount of free forth space left.                     **/
/******************************************************************************/
static unsigned int freeMem(void) {
//   return (pHere - forthSpace);
}

#ifdef INT_KERN_ENTRY
/******************************************************************************/
/** Start a New Entry in the Dictionary                                      **/
/******************************************************************************/
void openEntry(void) {
//   uint8_t index = 0;
//   pOldHere = pHere;            // Save the old location of HERE so we can
                               // abort out of the new definition
//   pNewUserEntry = (userEntry_t*)pHere;
//   if (pLastUserEntry == NULL)
//     pNewUserEntry->prevEntry = 0;              // Initialize User Dictionary
//   else pNewUserEntry->prevEntry = pLastUserEntry;
//   if (!getToken()) {
//    dStack_push(-16);
    // _throw();
//   }
//   char* ptr = pNewUserEntry->name;
//   do {
//     *ptr++ = cTokenBuffer[index++];
//   } while (cTokenBuffer[index] != '\0');
//   *ptr++ = '\0';
//   pHere = (cell_t *)ptr;
//   ALIGN_P(pHere);

//   pNewUserEntry->cfa = pHere;
//   pCodeStart = pHere;
}

/******************************************************************************/
/** Finish an new Entry in the Dictionary                                    **/
/******************************************************************************/
void closeEntry(void) {
//   if (errorCode == 0) {
//     *pHere++ = EXIT_IDX;
//     pNewUserEntry->flags = 0; // clear the word's flags
//     pLastUserEntry = pNewUserEntry;
//   } else pHere = pOldHere;   // Revert pHere to what it was before the start
                             // of the new word definition
}
#endif


/******************************************************************************/
/** String and Serial Functions                                              **/
/******************************************************************************/
void displayValue(void) {
  switch (base) {
    case DECIMAL: 
      Serial.print(w, DEC);
      break;
    case HEXIDECIMAL:
      Serial.print(hexidecimal_str); 
      Serial.print(w, HEX);
      break;
    case OCTAL:
      Serial.print(octal_str); 
      Serial.print(w, OCT);
      break;
    case BINARY:  
      Serial.print(binary_str); 
      Serial.print(w, BIN);
      break;
  }
  Serial.print(spS_str); // kludge - renamed to make it unique
}

/******************************************************************************/
/** Functions for decompiling words                                          **/
/**   Used by _see and _toName                                               **/
/******************************************************************************/
char* xtToName(cell_t xt) {
//   pUserEntry = pLastUserEntry;

  // Second Search through the flash Dictionary
//   if (xt < 256) {
//     Serial.print(flashDict[xt-1].name);
//   } else {
//     while (pUserEntry) {
//       if (pUserEntry->cfa == (cell_t*)xt) {
//         Serial.print(pUserEntry->name);
//         break;
//       }
//       pUserEntry = (userEntry_t*)pUserEntry->prevEntry;
//     }
//   }
//   return 0;
}



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
/**  YAFFA uses two dictionaries, one for built in words and is stored in    **/
/**  flash memory, and the other for user defined words, that is found in    **/
/**  RAM.                                                                    **/
/**                                                                          **/
/******************************************************************************/
/**                                                                          **/
/**  REVISION HISTORY:                                                       **/
/**                                                                          **/
/**    0.7.0                                                                 **/
/**    - Fixed the how LEAVE is handled in LOOP and +LOOP.                   **/
/**    0.6.2                                                                 **/
/**    - Added words ">NUMBER", "KEY?", ".(", "0<>", "0>", "2>R", "2R>",     **/
/**      "2R@".                                                              **/
/**    - Removed static from the function headers to avoid compilation       **/
/**      errors with the new 1.6.6 Arduino IDE.                              **/
/**                                                                          **/
/**                                                                          **/
/** 2017: changed to yaffa.h -- reverting possibly what is mentioned         **/
/**       on the lines, below this one.                                      **/
/**                                                                          **/
/**                                                                          **/
/**    - changed file names from yaffa.h to YAFFA.h and Yaffa.ino to         **/
/**      YAFFA.ino and the #includes to reflect the capatilized name. This   **/
/**      helps with cheking out the project from github without renaming     **/
/**      files.                                                              **/
/**                                                                          **/
/**                                                                          **/
/**    - Fixed comments for pinWrite and pinMode.                            **/
/**    - yaffa.h reorganized for different architectures                     **/
/**    - Replaced Serial.print(PSTR()) with Serial.print(F())                **/
/**    0.6.1                                                                 **/
/**    - Documentation cleanup. thanks to Dr. Hugh Sasse, BSc(Hons), PhD     **/
/**    0.6                                                                   **/
/**    - Fixed PROGMEM compilation errors do to new compiler in Arduino 1.6  **/
/**    - Embedded the revision in to the compiled code.                      **/
/**    - Revision is now displayed in greeting at start up.                  **/
/**    - the interpreter not clears the word flags before it starts.         **/
/**    - Updated TICK, WORD, and FIND to make use of primitive calls for to  **/
/**      reduce code size.                                                   **/
/**    - Added word flag checks in dot_quote() and _s_quote().               **/
/**                                                                          **/
/**  NOTES:                                                                  **/
/**                                                                          **/
/**    - Compiler now gives "Low memory available, stability problems may    **/
/**      occur." warning. This is expected since most memory is reserved for **/
/**      the FORTH environment. Excessive recursive calls may overrun the C  **/
/**      stack.                                                              **/
/**                                                                          **/
/**  THINGS TO DO:                                                           **/
/**                                                                          **/
/**  CORE WORDS TO ADD:                                                      **/
/**      >NUMBER                                                             **/
/**                                                                          **/
/**  THINGS TO FIX:                                                          **/
/**                                                                          **/
/**    Fix the outer interpreter to use FIND instead of isWord               **/
/**    Fix Serial.Print(w, HEX) from displaying negative numbers as 32 bits  **/
/**    Fix ENVIRONMENT? Query to take a string reference from the stack.     **/
/**                                                                          **/
/******************************************************************************/
