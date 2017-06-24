// Sat Jun 24 20:27:02 UTC 2017
// 4735-a0r-03-

extern const char fill_str[]; // = "fill";
extern void _fill(void);

extern const char store_str[]; // = "!";
extern void _store(void);

extern const char fetch_str[]; // = "@";
extern void _fetch(void);

extern const char c_store_str[]; // = "c!";
extern void _c_store(void);


/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**                                                                          **/
/**  File: Dictionary.ino                                                    **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/******************************************************************************/

#ifdef NEVER_DEFINED_ANYWHERE

// external const
extern const char literal_str[]; // = "literal";

// prototypes - this word
extern void interpreter(void);

// prototypes - structs
extern const flashEntry_t flashDict[];

// prototypes - variables
extern char* cpSource;      // Pointer to the string location that we will
                            // evaluate. This could be the input buffer or
                            // some other location in memory

extern char* cpToIn;        // Points to a position in the source string
                            // that was the last character to be parsed

extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

extern uint8_t wordFlags;             // Word flags

extern int8_t errorCode; // = 0;

extern cell_t* pHere;               // HERE, points to the next free position in

extern uint8_t state; // Holds the text interpreters compile/interpreter state

extern cell_t* ip;   // Instruction Pointer

extern cell_t w;     // Working Register

// prototypes - external functions
extern uint8_t getToken(void);
extern void executeWord(void);
extern void dStack_push(cell_t value);
extern void rStack_push(cell_t value);
extern cell_t dStack_pop(void);
extern uint8_t isWord(char* addr);
extern uint8_t isNumber(char* subString);
extern void _literal(void);
extern void _throw(void);

const char store_str[] = "!";
void _store(void);
#endif


#ifdef NEVER_DEFINED_ANYWHERE

const char c_comma_str[] = "c,";
void _c_comma(void);

const char plus_store_str[] = "+!";
void _plus_store(void);

const char two_store_str[] = "2!";
void _two_store(void);

const char fill_str[] = "fill";
void _fill(void);

const char fetch_str[] = "@";
void _fetch(void);

const char two_fetch_str[] = "2@";  // \x40 == '@'
void _two_fetch(void);

const char c_fetch_str[] = "c@";
void _c_fetch(void);

const char r_fetch_str[] = "r@";
void _r_fetch(void);

const char r_from_str[] = "r>";
void _r_from(void);

const char to_r_str[] = ">r";
void _to_r(void);
#endif

/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**                                                                          **/
/**  File: Dictionary.ino                                                    **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/******************************************************************************/
