// Sun Jun 18 02:05:55 UTC 2017
// 4735-a0k

#include <Arduino.h>
#include "../../yaffa.h"
// #include "../../Error_Codes.h"

#ifdef EXT_KERN_GETTOKEN
#include "gettoken.h"
/******************************************************************************/
/** GetToken                                                                 **/
/**   Find the next token in the buffer and stores it into the token buffer  **/
/**   with a NULL terminator. Returns length of the token or 0 if at end off **/
/**   the buffer.                                                            **/
/**   Could this become the word WORD?                                       **/
// ( char "<chars>ccc<chars>" -- c-addr )
// Skip leading delimiters. Parse characters ccc delimited by char. An ambiguous
// condition exists if the length of the parsed string is greater than the 
// implementation-defined length of a counted string.
//
// c-addr is the address of a transient region containing the parsed word as a
// counted string. If the parse area was empty or contained no characters other than
// the delimiter, the resulting string has a zero length. A space, not included in 
// the length, follows the string. A program may replace characters within the 
// string.
//
// NOTE: The requirement to follow the string with a space is obsolescent and is
// included as a concession to existing programs that use CONVERT. A program shall 
// not depend on the existence of the space.
/******************************************************************************/
uint8_t getToken(void) {
  uint8_t tokenIdx = 0;
  while (cpToIn <= cpSourceEnd) {
    if ((*cpToIn == cDelimiter) || (*cpToIn == 0)) {
      cTokenBuffer[tokenIdx] = '\0';       // Terminate SubString
      cpToIn++;
      if (tokenIdx) return tokenIdx;
    } else {
      if (tokenIdx < (WORD_SIZE - 1)) {
        cTokenBuffer[tokenIdx++] = *cpToIn++;
      }
    }
  }
// If we get to SourceEnd without a delimiter and the token buffer has
// something in it return that. Else return 0 to show we found nothing
  if (tokenIdx) return tokenIdx;
  else return 0;
}

#endif
