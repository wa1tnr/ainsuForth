// Sun Jun 18 02:05:55 UTC 2017
// 4735-a0k

// prototypes - this word
extern uint8_t getToken(void);

// prototypes - variables
extern char* cpSourceEnd;              // Points to the end of the source string
extern char* cpToIn;                   // Points to a position in the source string
                                       // that was the last character to be parsed
extern char cDelimiter; // = ' ';          // The parsers delimiter
extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

