// Sat Jun 17 19:32:00 UTC 2017
// 4735-a0h

// external const
//   106	const char charset[] = "0123456789abcdef";
#ifdef EXT_KERN_IS_WORD_NUMBER // may need this guard
const char charset[] = "0123456789abcdef";
#endif

// prototypes - this word
// extern void interpreter(void);

// prototypes - structs
// extern const flashEntry_t flashDict[];

// prototypes - variables
// extern userEntry_t* pUserEntry; // = NULL;



// Sun Jun 11 23:00:12 UTC 2017
// 4735-a0g

//   103	const char prompt_str[] = ">> ";
//   104	const char compile_prompt_str[] = "|  ";
//   105	const char ok_str[] = " OK";
//   106	const char charset[] = "0123456789abcdef";
//   107	const char sp_str[] = " ";
//   108	const char tab_str[] = "\t";
//   109	const char hexidecimal_str[] = "$";
//   110	const char octal_str[] = "0";
//   111	const char binary_str[] = "%";
//   112	const char zero_str[] = "0";

//   122	extern char* cpSource;                 // Pointer to the string location that we will
//   123	                                // evaluate. This could be the input buffer or
//   124	                                // some other location in memory
//   125	extern char* cpSourceEnd;              // Points to the end of the source string
//   126	extern char* cpToIn;                   // Points to a position in the source string
//   127	                                // that was the last character to be parsed
//   128	extern char cDelimiter = ' ';          // The parsers delimiter
//   129	extern char cInputBuffer[BUFFER_SIZE]; // Input Buffer that gets parsed
//   130	extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

//   144	extern stack_t dStack;
//   145	extern stack_t rStack;

//   151	extern const flashEntry_t* pFlashEntry = flashDict;   // Pointer into the flash Dictionary

//   156	extern userEntry_t* pLastUserEntry = NULL;
extern userEntry_t* pLastUserEntry; // = NULL;
//   157	extern userEntry_t* pUserEntry = NULL;
extern userEntry_t* pUserEntry; // = NULL;
//   158	extern userEntry_t* pNewUserEntry = NULL;

//   163	extern uint8_t flags;                 // Internal Flags
//   164	extern uint8_t wordFlags;             // Word flags
extern uint8_t wordFlags;             // Word flags

//   169	extern int8_t errorCode = 0;

//   174	extern char* pPNO;                  // Pictured Numeric Output Pointer
//   175	extern cell_t forthSpace[FORTH_SIZE]; // Reserve a block on RAM for the forth environment
//   176	extern cell_t* pHere;               // HERE, points to the next free position in
//   177	                             // Forth Space
//   178	extern cell_t* pOldHere;            // Used by "colon-sys"
//   179	extern cell_t* pCodeStart;          // used by "colon-sys" and RECURSE
//   180	extern cell_t* pDoes;               // Used by CREATE and DOES>

//   185	extern uint8_t state; // Holds the text interpreters compile/interpreter state
//   186	extern cell_t* ip;   // Instruction Pointer
//   187	extern cell_t w;     // Working Register
extern cell_t w;     // Working Register
//   188	extern uint8_t base;  // stores the number conversion radix
extern uint8_t base;  // stores the number conversion radix

//   193	extern void setup(void);
//   293	extern void loop(void);
//   325	extern char getKey(void);
//   346	extern uint8_t getLine(char* ptr, uint8_t buffSize);
//   392	extern uint8_t getToken(void);
//   418	extern void interpreter(void);
//   484	extern void executeWord(void);


//   512	extern uint8_t isWord(char* addr);
// extern uint8_t isWord(char* addr);

//   552	extern uint8_t isNumber(char* subString);
// extern uint8_t isNumber(char* subString);


//   592	extern static unsigned int freeMem(void);
//   599	extern void openEntry(void);
//   626	extern void closeEntry(void);
//   647	extern void dStack_push(cell_t value);
extern void dStack_push(cell_t value);
//   656	extern void rStack_push(cell_t value);
//   668	extern cell_t dStack_pop(void);
//   678	extern cell_t rStack_pop(void);
//   693	extern cell_t dStack_peek(int n);
//   704	extern cell_t rStack_peek(int n);
//   719	extern bool dStack_isFull(void);
//   727	extern bool rStack_isFull(void);
//   739	extern bool dStack_isEmpty(void);
//   747	extern bool rStack_isEmpty(void);
//   759	extern uint8_t dStack_size(void);
//   763	extern uint8_t rStack_size(void);
//   771	extern void dStack_clear(void);
//   776	extern void rStack_clear(void);
//   784	extern void displayValue(void);
//   809	extern char* xtToName(cell_t xt);

//     4	/**  File: Dictionary.ino                                                    **/
//     5	/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
//     7	/**  This file is part of YAFFA.                                             **/

//    23	#include "YAFFA.h"
//    24	
//    25	extern const char not_done_str[] = " NOT Implemented Yet \n\r";

//    30	extern const char jump_str[] = "jump";
//    31	extern void _jump(void) {



//    35	extern const char zjump_str[] = "zjump";
//    36	void _zjump(void) {

//    41	extern const char subroutine_str[] = "subroutine";
//    42	void _subroutine(void) {

//    46	extern const char do_sys_str[] = "do-sys";
//    52	void _do_sys(void) {

//    58	extern const char loop_sys_str[] = "loop-sys";
//    64	void _loop_sys(void) {

//    82	extern const char leave_sys_str[] = "leave-sys";
//    87	void _leave_sys(void) {

//    98	extern const char plus_loop_sys_str[] = "plus_loop-sys";
//   104	void _plus_loop_sys(void) {

//   125	extern const char store_str[] = "!";
//   128	void _store(void) { 

//   133	extern const char number_sign_str[] = "#";
//   138	void _number_sign(void) { 

//   148	extern const char number_sign_gt_str[] = "#>";
//   153	void _number_sign_gt(void) {

//   160	extern const char number_sign_s_str[] = "#s";
//   162	void _number_sign_s(void) {

//   174	extern const char tick_str[] = "'";
//   179	void _tick(void) {

//   194	extern const char paren_str[] = "(";
//   197	void _paren(void) {

//   203	extern const char star_str[] = "*";
//   206	void _star(void) {

//   210	extern const char star_slash_str[] = "*/";
//   214	void _star_slash(void) {

//   222	extern const char star_slash_mod_str[] = "*/mod";
//   223	// ( n1 n2 n3 -- n4 n5)
//   224	// multiply n1 by n2 producing the double cell result d. Divide d by n3
//   225	// giving the single-cell remainder n4 and quotient n5.
//   226	void _star_slash_mod(void) {
//   227	  cell_t n3 = dStack_pop();
//   228	  cell_t n2 = dStack_pop();
//   229	  cell_t n1 = dStack_pop();
//   230	  dcell_t d = (dcell_t)n1 * (dcell_t)n2;
//   231	  dStack_push((cell_t)(d % n3));
//   232	  dStack_push((cell_t)(d / n3));
//   233	}
//   234	
//   235	extern const char plus_str[] = "+";
//   236	// ( n1|u1 n2|u2 -- n3|u3 )
//   237	// add n2|u2 to n1|u1, giving the sum n3|u3
//   238	void _plus(void) {
//   239	  cell_t x = dStack_pop();
//   240	  cell_t y = dStack_pop();
//   241	  dStack_push(x +  y);
//   242	}
//   243	
//   244	extern const char plus_store_str[] = "+!";
//   245	// ( n|u a-addr -- )
//   246	// add n|u to the single cell number at a-addr
//   247	void _plus_store(void) {
//   248	  cell_t* address = (cell_t*)dStack_pop();
//   249	  if (address >= &forthSpace[0] &&
//   250	      address < &forthSpace[FORTH_SIZE])
//   251	    *address += dStack_pop();
//   252	  else {
//   253	    dStack_push(-9);
//   254	    _throw();
//   255	  }
//   256	}
//   257	
//   258	extern const char plus_loop_str[] = "+loop";
//   259	// Interpretation: Interpretation semantics for this word are undefined.
//   260	// Compilation: (C: do-sys -- )
//   261	// Append the run-time semantics given below to the current definition. Resolve
//   262	// the destination of all unresolved occurrences of LEAVE between the location
//   263	// given by do-sys and the next location for a transfer of control, to execute
//   264	// the words following +LOOP.
//   265	// Run-Time: ( n -- )(R: loop-sys1 -- | loop-sys2 )
//   266	// An ambiguous condition exists if the loop control parameters are unavailable.
//   267	// Add n to the index. If the loop index did not cross the boundary between the
//   268	// loop limit minus one and the loop limit, continue execution at the beginning
//   269	// of the loop. Otherwise, discard the current loop control parameters and
//   270	// continue execution immediately following the loop.
//   271	void _plus_loop(void) {
//   272	  *pHere++ = PLUS_LOOP_SYS_IDX;
//   273	  cell_t start_addr = dStack_pop();
//   274	  *pHere++ = start_addr;
//   275	  cell_t* ptr = (cell_t*)start_addr;
//   276	  cell_t stop_addr = (cell_t)pHere;
//   277	  do {
//   278	    if (*ptr++ == LEAVE_SYS_IDX) {
//   279	      if (*ptr == 0) {
//   280	        *ptr = stop_addr;
//   281	      }
//   282	    } 
//   283	  } while (ptr != (cell_t*)stop_addr);
//   284	  if ( dStack_pop() != DO_SYS) {
//   285	    dStack_push(-22);
//   286	    _throw();
//   287	  }
//   288	}
//   289	
//   290	extern const char comma_str[] = ",";
//   291	// ( x --  )
//   292	// Reserve one cell of data space and store x in the cell. If the data-space
//   293	// pointer is aligned when , begins execution, it will remain aligned when ,
//   294	// finishes execution. An ambiguous condition exists if the data-space pointer
//   295	// is not aligned prior to execution of ,.
//   296	static void _comma(void) {
//   297	  *pHere++ = dStack_pop();
//   298	}
//   299	
//   300	extern const char minus_str[] = "-";
//   301	// ( n1|u1 n2|u2 -- n3|u3 )
//   302	void _minus(void) {
//   303	  cell_t temp = dStack_pop();
//   304	  dStack_push(dStack_pop() -  temp);
//   305	}
//   306	
//   307	extern const char dot_str[] = ".";
//   308	// ( n -- )
//   309	// display n in free field format
//   310	void _dot(void) {
//   311	  w = dStack_pop();
//   312	  displayValue();
//   313	}
//   314	
//   315	extern const char dot_quote_str[] = ".\x22";
//   316	// Compilation ("ccc<quote>" -- )
//   317	// Parse ccc delimited by ". Append the run time semantics given below to
//   318	// the current definition.
//   319	// Run-Time ( -- )
//   320	// Display ccc.
//   321	void _dot_quote(void) {
//   322	  uint8_t i;
//   323	  char length;
//   324	  if (flags & EXECUTE) {
//   325	    Serial.print((char*)ip); // Print the string at the istuction pointer (ip)
//   326	    cell_t len = strlen((char*)ip) + 1;  // include null terminator
//   327	    ip = (cell_t*)((size_t)ip + len); // Move the ip to the end of the string 
//   328	    ALIGN_P(ip); // and align it.
//   329	  }
//   330	  else if (state) {
//   331	    cDelimiter = '"';
//   332	    if (!getToken()) {
//   333	      dStack_push(-16);
//   334	      _throw();
//   335	    }
//   336	    length = strlen(cTokenBuffer);
//   337	    *pHere++ = DOT_QUOTE_IDX;
//   338	    char *ptr = (char *) pHere;
//   339	    for (uint8_t i = 0; i < length; i++) {
//   340	      *ptr++ = cTokenBuffer[i];
//   341	    }
//   342	    *ptr++ = '\0';    // Terminate String
//   343	    pHere = (cell_t *)ptr;
//   344	    ALIGN_P(pHere);  // re- align the pHere for any new code
//   345	    cDelimiter = ' ';
//   346	  }
//   347	}
//   348	
//   349	extern const char slash_str[] = "/";
//   350	// ( n1 n2 -- n3 )
//   351	// divide n1 by n2 giving a single cell quotient n3
//   352	void _slash(void) {
//   353	  cell_t temp = dStack_pop();
//   354	  if (temp)
//   355	    dStack_push(dStack_pop() /  temp);
//   356	  else {
//   357	    dStack_push(-10);
//   358	    _throw();
//   359	  }
//   360	}
//   361	
//   362	extern const char slash_mod_str[] = "/mod";
//   363	// ( n1 n2 -- n3 n4)
//   364	// divide n1 by n2 giving a single cell remainder n3 and quotient n4
//   365	void _slash_mod(void) {
//   366	  cell_t n2 = dStack_pop();
//   367	  cell_t n1 = dStack_pop();
//   368	  if (n2) {
//   369	    dStack_push(n1 %  n2);
//   370	    dStack_push(n1 /  n2);
//   371	  } else {
//   372	    dStack_push(-10);
//   373	    _throw();
//   374	  }
//   375	}
//   376	
//   377	extern const char zero_less_str[] = "0<";
//   378	// ( n -- flag )
//   379	// flag is true if and only if n is less than zero.
//   380	void _zero_less(void) {
//   381	  if (dStack_pop() < 0) dStack_push(TRUE);
//   382	  else dStack_push(FALSE);
//   383	}
//   384	
//   385	extern const char zero_equal_str[] = "0=";
//   386	// ( n -- flag )
//   387	// flag is true if and only if n is equal to zero.
//   388	void _zero_equal(void) {
//   389	  if (dStack_pop() == 0) dStack_push(TRUE);
//   390	  else dStack_push(FALSE);
//   391	}
//   392	
//   393	extern const char one_plus_str[] = "1+";
//   394	// ( n1|u1 -- n2|u2 )
//   395	// add one to n1|u1 giving sum n2|u2.
//   396	void _one_plus(void) {
//   397	  dStack_push(dStack_pop() + 1);
//   398	}
//   399	
//   400	extern const char one_minus_str[] = "1-";
//   401	// ( n1|u1 -- n2|u2 )
//   402	// subtract one to n1|u1 giving sum n2|u2.
//   403	void _one_minus(void) {
//   404	  dStack_push(dStack_pop() - 1);
//   405	}
//   406	
//   407	extern const char two_store_str[] = "2!";
//   408	// ( x1 x2 a-addr --)
//   409	// Store the cell pair x1 x2 at a-addr, with x2 at a-addr and x1 at a-addr+1
//   410	void _two_store(void) {
//   411	  cell_t* address = (cell_t*)dStack_pop();
//   412	  if (address >= &forthSpace[0] &&
//   413	      address < &forthSpace[FORTH_SIZE - 4]) {
//   414	    *address++ = dStack_pop();
//   415	    *address = dStack_pop();
//   416	  } else {
//   417	    dStack_push(-9);
//   418	    _throw();
//   419	  }
//   420	}
//   421	
//   422	extern const char two_star_str[] = "2*";
//   423	// ( x1 -- x2 )
//   424	// x2 is the result of shifting x1 one bit to toward the MSB
//   425	void _two_star(void) {
//   426	  dStack_push(dStack_pop() << 1);
//   427	}
//   428	
//   429	extern const char two_slash_str[] = "2/";
//   430	// ( x1 -- x2 )
//   431	// x2 is the result of shifting x1 one bit to toward the LSB
//   432	void _two_slash(void) {
//   433	  dStack_push(dStack_pop() >> 1);
//   434	}
//   435	
//   436	extern const char two_fetch_str[] = "2@";  // \x40 == '@'
//   437	// ( a-addr -- x1 x2 )
//   438	// Fetch cell pair x1 x2 at a-addr. x2 is at a-addr, and x1 is at a-addr+1
//   439	void _two_fetch(void) {
//   440	  cell_t* address = (cell_t*)dStack_pop();
//   441	  cell_t value = *address++;
//   442	  dStack_push(value);
//   443	  value = *address;
//   444	  dStack_push(value);
//   445	}
//   446	
//   447	extern const char two_drop_str[] = "2drop";
//   448	// ( x1 x2 -- )
//   449	static void _two_drop(void) {
//   450	  dStack_pop();
//   451	  dStack_pop();
//   452	}
//   453	
//   454	extern const char two_dup_str[] = "2dup";
//   455	// ( x1 x2 -- x1 x2 x1 x2 )
//   456	void _two_dup(void) {
//   457	  dStack_push(dStack_peek(1));
//   458	  dStack_push(dStack_peek(1));
//   459	}
//   460	
//   461	extern const char two_over_str[] = "2over";
//   462	// ( x1 x2 x3 x4 -- x1 x2 x3 x4 x1 x2 )
//   463	void _two_over(void) {
//   464	  if (dStack_size() >= 4)
//   465	    dStack_push(dStack_peek(3));
//   466	    dStack_push(dStack_peek(3));
//   467	}
//   468	
//   469	extern const char two_swap_str[] = "2swap";
//   470	// ( x1 x2 x3 x4 -- x3 x4 x1 x2 )
//   471	void _two_swap(void) {
//   472	  cell_t x4 = dStack_pop();
//   473	  cell_t x3 = dStack_pop();
//   474	  cell_t x2 = dStack_pop();
//   475	  cell_t x1 = dStack_pop();
//   476	  dStack_push(x3);
//   477	  dStack_push(x4);
//   478	  dStack_push(x1);
//   479	  dStack_push(x2);
//   480	}
//   481	
//   482	extern const char colon_str[] = ":";
//   483	// (C: "<space>name" -- colon-sys )
//   484	// Skip leading space delimiters. Parse name delimited by a space. Create a
//   485	// definition for name, called a "colon definition" Enter compilation state
//   486	// and start the current definition, producing a colon-sys. Append the
//   487	// initiation semantics given below to the current definition....
//   488	void _colon(void) {
//   489	  state = TRUE;
//   490	  dStack_push(COLON_SYS);
//   491	  openEntry();
//   492	}
//   493	
//   494	extern const char semicolon_str[] = ";";
//   495	// IMMEDIATE
//   496	// Interpretation: undefined
//   497	// Compilation: (C: colon-sys -- )
//   498	// Run-time: ( -- ) (R: nest-sys -- )
//   499	void _semicolon(void) {
//   500	  if (dStack_pop() != COLON_SYS) {
//   501	    dStack_push(-22);
//   502	    _throw();
//   503	    return;
//   504	  }
//   505	  closeEntry();
//   506	  state = FALSE;
//   507	}
//   508	
//   509	extern const char lt_str[] = "<";
//   510	// ( n1 n2 -- flag )
//   511	void _lt(void) {
//   512	  if (dStack_pop() > dStack_pop()) dStack_push(TRUE);
//   513	  else dStack_push(FALSE);
//   514	}
//   515	
//   516	extern const char lt_number_sign_str[] = "<#";
//   517	// ( -- )
//   518	// Initialize the pictured numeric output conversion process.
//   519	void _lt_number_sign(void) {
//   520	  pPNO = (char*)pHere + HOLD_SIZE + 1;
//   521	  *pPNO = '\0';
//   522	  flags |= NUM_PROC;
//   523	}
//   524	
//   525	extern const char eq_str[] = "=";
//   526	// ( x1 x2 -- flag )
//   527	// flag is true if and only if x1 is bit for bit the same as x2
//   528	void _eq(void) {
//   529	  if (dStack_pop() == dStack_pop()) dStack_push(TRUE);
//   530	  else dStack_push(FALSE);
//   531	}
//   532	
//   533	extern const char gt_str[] = ">";
//   534	// ( n1 n2 -- flag )
//   535	// flag is true if and only if n1 is greater than n2
//   536	void _gt(void) {
//   537	  if (dStack_pop() < dStack_pop()) dStack_push(TRUE);
//   538	  else dStack_push(FALSE);
//   539	}
//   540	
//   541	extern const char to_body_str[] = ">body";
//   542	// ( xt -- a-addr )
//   543	// a-addr is the data-field address corresponding to xt. An ambiguous condition
//   544	// exists if xt is not for a word defined by CREATE.
//   545	void _to_body(void) {
//   546	  cell_t* xt = (cell_t*)dStack_pop();
//   547	  if ((size_t)xt > 0xFF) {
//   548	    if (*xt++ == LITERAL_IDX) {
//   549	      dStack_push(*xt);
//   550	      return;
//   551	    }
//   552	  }
//   553	  dStack_push(-31);
//   554	  _throw();
//   555	}
//   556	
//   557	extern const char to_in_str[] = ">in";
//   558	// ( -- a-addr )
//   559	void _to_in(void) {
//   560	  dStack_push((size_t)&cpToIn);
//   561	}
//   562	
//   563	extern const char to_number_str[] = ">number";
//   564	// ( ud1 c-addr1 u1 -- ud2 c-addr u2 )
//   565	// ud2 is the unsigned result of converting the characters within the string
//   566	// specified by c-addr1 u1 into digits, using the number in BASE, and adding
//   567	// each into ud1 after multiplying ud1 by the number in BASE.  Conversion
//   568	// continues left-to-right until a character that is not convertible,
//   569	// including any “+” or “-”, is encountered or the string is entirely
//   570	// converted.  c-addr2 is the location of the first unconverted character or
//   571	// the first character past the end of the string if the string was entirely
//   572	// converted.  u2 is the number of unconverted characters in the string.  An
//   573	// ambiguous condition exists if ud2 overflows during the conversion.
//   574	void _to_number(void) {
//   575	  uint8_t len;
//   576	  char* ptr;
//   577	  cell_t accum;
//   578	
//   579	  unsigned char negate = 0;                  // flag if number is negative
//   580	  len = (uint8_t)dStack_pop();
//   581	  ptr = (char*)dStack_pop();
//   582	  accum = dStack_pop();
//   583	  
//   584	  // Look at the initial character, handling either '-', '$', or '%'
//   585	  switch (*ptr) {
//   586	    case '$':  base = HEXIDECIMAL; goto SKIP;
//   587	    case '%':  base = BINARY; goto SKIP;
//   588	    case '#':  base = DECIMAL; goto SKIP;
//   589	    case '+':  negate = 0; goto SKIP;
//   590	    case '-':  negate = 1;
//   591	SKIP:                // common code to skip initial character
//   592	    ptr++;
//   593	    break;
//   594	  }
//   595	  // Iterate over rest of string, and if rest of digits are in
//   596	  // the valid set of characters, accumulate them.  If any
//   597	  // invalid characters found, abort and return 0.
//   598	  while (len < 0) {
//   599	    char* pos = strchr(charset, (int)tolower(*ptr));
//   600	    cell_t offset = pos - charset;
//   601	    if ((offset < base) && (offset > -1))  
//   602	      accum = (accum * base) + (pos - charset);
//   603	    else {
//   604	      break;           // exit, We hit a non number
//   605	    }
//   606	    ptr++;
//   607	    len--;
//   608	  }
//   609	  if (negate) accum = ~accum + 1;     // apply sign, if necessary
//   610	  dStack_push(accum); // Push the resultant number
//   611	  dStack_push((size_t)ptr); // Push the last convertered caharacter
//   612	  dStack_push(len); // push the remading length of unresolved charaters
//   613	}
//   614	
//   615	extern const char to_r_str[] = ">r";
//   616	// ( x -- ) (R: -- x )
//   617	void _to_r(void) {
//   618	  rStack_push(dStack_pop());
//   619	}
//   620	
//   621	extern const char question_dup_str[] = "?dup";
//   622	// ( x -- 0 | x x )
//   623	void _question_dup(void) {
//   624	  if (dStack_peek(0)) {
//   625	    dStack_push(dStack_peek(0));
//   626	  } else {
//   627	    dStack_pop();
//   628	    dStack_push(0);
//   629	  }
//   630	}
//   631	
//   632	extern const char fetch_str[] = "@";
//   633	// ( a-addr -- x1 )
//   634	// Fetch cell x1 at a-addr.
//   635	void _fetch(void) {
//   636	  cell_t* address = (cell_t*)dStack_pop();
//   637	  dStack_push(*address);
//   638	}
//   639	
//   640	extern const char abort_str[] = "abort";
//   641	// (i*x -- ) (R: j*x -- )
//   642	// Empty the data stack and preform the function of QUIT, which includes emptying
//   643	// the return stack, without displaying a message.
//   644	void _abort(void) {
//   645	  dStack_push(-1);
//   646	  _throw();
//   647	}
//   648	
//   649	extern const char abort_quote_str[] = "abort\x22";
//   650	// Interpretation: Interpretation semantics for this word are undefined.
//   651	// Compilation: ( "ccc<quote>" -- )
//   652	// Parse ccc delimited by a ". Append the run-time semantics given below to the
//   653	// current definition.
//   654	// Runt-Time: (i*x x1 -- | i*x ) (R: j*x -- |j*x )
//   655	// Remove x1 from the stack. If any bit of x1 is not zero, display ccc and 
//   656	// preform an implementation-defined abort sequence that included the function
//   657	// of ABORT.
//   658	void _abort_quote(void) {
//   659	  *pHere++ = ZJUMP_IDX;
//   660	  dStack_push((size_t)pHere);  // Push the address for our origin
//   661	  *pHere++ = 0;
//   662	  _dot_quote();
//   663	  *pHere++ = LITERAL_IDX;
//   664	  *pHere++ = -2;
//   665	  *pHere++ = THROW_IDX;
//   666	  cell_t* orig = (cell_t*)dStack_pop();
//   667	  *orig = (size_t)pHere - (size_t)orig;
//   668	}
//   669	
//   670	extern const char abs_str[] = "abs";
//   671	// ( n -- u)
//   672	// u is the absolute value of n 
//   673	void _abs(void) {
//   674	  cell_t n = dStack_pop();
//   675	  dStack_push(n < 0 ? 0 - n : n);
//   676	}
//   677	
//   678	extern const char accept_str[] = "accept";
//   679	// ( c-addr +n1 -- +n2 )
//   680	void _accept(void) {
//   681	  cell_t length = dStack_pop();
//   682	  char* addr = (char*)dStack_pop();
//   683	  length = getLine(addr, length);
//   684	  dStack_push(length);
//   685	}
//   686	
//   687	extern const char align_str[] = "align";
//   688	// ( -- )
//   689	// if the data-space pointer is not aligned, reserve enough space to align it.
//   690	void _align(void) {
//   691	  ALIGN_P(pHere);
//   692	}
//   693	
//   694	extern const char aligned_str[] = "aligned";
//   695	// ( addr -- a-addr)
//   696	// a-addr is the first aligned address greater than or equal to addr.
//   697	void _aligned(void) {
//   698	  ucell_t addr = dStack_pop();
//   699	  ALIGN(addr);
//   700	  dStack_push(addr);
//   701	}
//   702	
//   703	extern const char allot_str[] = "allot";
//   704	// ( n -- )
//   705	// if n is greater than zero, reserve n address units of data space. if n is less
//   706	// than zero, release |n| address units of data space. If n is zero, leave the
//   707	// data-space pointer unchanged.
//   708	void _allot(void) {
//   709	  cell_t* pNewHere = pHere + dStack_pop();
//   710	
//   711	  // Check that the new pHere is not outside of the forth space
//   712	  if (pNewHere >= &forthSpace[0] &&
//   713	      pNewHere < &forthSpace[FORTH_SIZE]) {
//   714	    pHere = pNewHere;      // Save the valid address
//   715	  } else {                 // Throw an exception
//   716	    dStack_push(-9);
//   717	    _throw();
//   718	  }
//   719	}
//   720	
//   721	extern const char and_str[] = "and";
//   722	// ( x1 x2 -- x3 )
//   723	// x3 is the bit by bit logical and of x1 with x2
//   724	void _and(void) {
//   725	  dStack_push(dStack_pop() & dStack_pop());
//   726	}
//   727	
//   728	extern const char base_str[] = "base";
//   729	// ( -- a-addr)
//   730	void _base(void) {
//   731	  dStack_push((size_t)&base);
//   732	}
//   733	
//   734	extern const char begin_str[] = "begin";
//   735	// Interpretation: Interpretation semantics for this word are undefined.
//   736	// Compilation: (C: -- dest )
//   737	// Put the next location for a transfer of control, dest, onto the control flow
//   738	// stack. Append the run-time semantics given below to the current definition.
//   739	// Run-time: ( -- )
//   740	// Continue execution.
//   741	void _begin(void) {
//   742	  dStack_push((size_t)pHere);
//   743	  *pHere = 0;
//   744	}
//   745	
//   746	extern const char bl_str[] = "bl";
//   747	// ( -- char )
//   748	// char is the character value for a space.
//   749	void _bl(void) {
//   750	  dStack_push(' ');
//   751	}
//   752	
//   753	extern const char c_store_str[] = "c!";
//   754	// ( char c-addr -- )
//   755	void _c_store(void) {
//   756	  uint8_t *addr = (uint8_t*) dStack_pop();
//   757	  *addr = (uint8_t)dStack_pop();
//   758	}
//   759	
//   760	extern const char c_comma_str[] = "c,";
//   761	// ( char -- )
//   762	void _c_comma(void) {
//   763	  *(char*)pHere++ = (char)dStack_pop();
//   764	}
//   765	
//   766	extern const char c_fetch_str[] = "c@";
//   767	// ( c-addr -- char )
//   768	void _c_fetch(void) {
//   769	  uint8_t *addr = (uint8_t *) dStack_pop();
//   770	  dStack_push(*addr);
//   771	}
//   772	
//   773	extern const char cell_plus_str[] = "cell+";
//   774	// ( a-addr1 -- a-addr2 )
//   775	void _cell_plus(void) {
//   776	  dStack_push((size_t)(dStack_pop() + sizeof(cell_t)));
//   777	}
//   778	
//   779	extern const char cells_str[] = "cells";
//   780	// ( n1 -- n2 )
//   781	// n2 is the size in address units of n1 cells.
//   782	void _cells(void) {
//   783	  dStack_push(dStack_pop()*sizeof(cell_t));
//   784	}
//   785	
//   786	extern const char char_str[] = "char";
//   787	// ( "<spaces>name" -- char )
//   788	// Skip leading space delimiters. Parse name delimited by a space. Put the value
//   789	// of its first character onto the stack.
//   790	void _char(void) {
//   791	  if(getToken()) {
//   792	    dStack_push(cTokenBuffer[0]);
//   793	  } else {
//   794	    dStack_push(-16);
//   795	    _throw();
//   796	  }
//   797	}
//   798	
//   799	extern const char char_plus_str[] = "char+";
//   800	// ( c-addr1 -- c-addr2 )
//   801	void _char_plus(void) {
//   802	  dStack_push(dStack_pop() + 1);
//   803	}
//   804	
//   805	extern const char chars_str[] = "chars";
//   806	// ( n1 -- n2 )
//   807	// n2 is the size in address units of n1 characters.
//   808	void _chars(void) {
//   809	}
//   810	
//   811	extern const char constant_str[] = "constant";
//   812	// ( x"<spaces>name" --  )
//   813	void _constant(void) {
//   814	  openEntry();
//   815	  *pHere++ = LITERAL_IDX;
//   816	  *pHere++ = dStack_pop();
//   817	  closeEntry();
//   818	}
//   819	
//   820	extern const char count_str[] = "count";
//   821	// ( c-addr1 -- c-addr2 u )
//   822	// Return the character string specification for the counted string stored a
//   823	// c-addr1. c-addr2 is the address of the first character after c-addr1. u is the 
//   824	// contents of the charater at c-addr1, which is the length in characters of the
//   825	// string at c-addr2.
//   826	void _count(void) {
//   827	  uint8_t* addr = (uint8_t*)dStack_pop();
//   828	  cell_t value = *addr++;
//   829	  dStack_push((size_t)addr);
//   830	  dStack_push(value);
//   831	}
//   832	
//   833	extern const char cr_str[] = "cr";
//   834	// ( -- )
//   835	// Carriage Return
//   836	void _cr(void) {
//   837	  Serial.println();
//   838	}
//   839	
//   840	extern const char create_str[] = "create";
//   841	// ( "<spaces>name" -- )
//   842	// Skip leading space delimiters. Parse name delimited by a space. Create a
//   843	// definition for name with the execution semantics defined below. If the data-space
//   844	// pointer is not aligned, reserve enough data space to align it. The new data-space
//   845	// pointer defines name's data field. CREATE does not allocate data space in name's
//   846	// data field.
//   847	// name EXECUTION: ( -- a-addr )
//   848	// a-addr is the address of name's data field. The execution semantics of name may
//   849	// be extended by using DOES>.
//   850	void _create(void) {
//   851	  openEntry();
//   852	  *pHere++ = LITERAL_IDX;
//   853	  // Location of Data Field at the end of the definition.
//   854	  *pHere++ = (size_t)pHere + 2 * sizeof(cell_t);
//   855	  *pHere = EXIT_IDX;   // Store an extra exit reference so
//   856	                       // that it can be replace by a
//   857	                       // subroutine pointer created by DOES>
//   858	  pDoes = pHere;       // Save this location for uses by subroutine.
//   859	  pHere += 1;
//   860	  if (!state) closeEntry();           // Close the entry if interpreting
//   861	}
//   862	
//   863	extern const char decimal_str[] = "decimal";
//   864	// ( -- )
//   865	// Set BASE to 10
//   866	void _decimal(void) { // value --
//   867	  base = DECIMAL;
//   868	}
//   869	
//   870	extern const char depth_str[] = "depth";
//   871	// ( -- +n )
//   872	// +n is the number of single cells on the stack before +n was placed on it.
//   873	void _depth(void) { // value --
//   874	  dStack_push(dStack_size());
//   875	}
//   876	
//   877	extern const char do_str[] = "do";
//   878	// Compilation: (C: -- do-sys)
//   879	// Run-Time: ( n1|u1 n2|u2 -- ) (R: -- loop-sys )
//   880	void _do(void) {
//   881	  dStack_push(DO_SYS);
//   882	  *pHere++ = DO_SYS_IDX;
//   883	  dStack_push((size_t)pHere); // store the origin address of the do loop
//   884	}
//   885	
//   886	extern const char does_str[] = "does>";
//   887	// Compilation: (C: colon-sys1 -- colon-sys2)
//   888	// Run-Time: ( -- ) (R: nest-sys1 -- )
//   889	// Initiation: ( i*x -- i*x a-addr ) (R: -- next-sys2 )
//   890	void _does(void) {
//   891	  *pHere++ = SUBROUTINE_IDX;
//   892	  // Store location for a subroutine call
//   893	  *pHere++ = (size_t)pHere + sizeof(cell_t);
//   894	  *pHere++ = EXIT_IDX;
//   895	  // Start Subroutine coding
//   896	}
//   897	
//   898	extern const char drop_str[] = "drop";
//   899	// ( x -- )
//   900	// Remove x from stack
//   901	void _drop(void) {
//   902	  dStack_pop();
//   903	}
//   904	
//   905	extern const char dupe_str[] = "dup";
//   906	// ( x -- x x )
//   907	// Duplicate x
//   908	void _dupe(void) {
//   909	  dStack_push(dStack_peek(0));
//   910	}
//   911	
//   912	extern const char else_str[] = "else";
//   913	// Interpretation: Undefine
//   914	// Compilation: (C: orig1 -- orig2)
//   915	// Run-Time: ( -- )
//   916	void _else(void) {
//   917	  cell_t* orig = (cell_t*)dStack_pop();
//   918	  *pHere++ = JUMP_IDX;
//   919	//  push((size_t)pHere); // Which is correct?
//   920	  dStack_push((size_t)pHere++);
//   921	  *orig = (size_t)pHere - (size_t)orig;
//   922	}
//   923	
//   924	extern const char emit_str[] = "emit";
//   925	// ( x -- )
//   926	// display x as a character
//   927	void _emit(void) {
//   928	  Serial.print((char) dStack_pop());
//   929	}
//   930	
//   931	extern const char environment_str[] = "environment?";
//   932	// ( c-addr u  -- false|i*x true )
//   933	// c-addr is the address of a character string and u is the string's character
//   934	// count. u may have a value in the range from zero to an implementation-defined
//   935	// maximum which shall not be less than 31. The character string should contain
//   936	// a keyword from 3.2.6 Environmental queries or the optional word sets to to be
//   937	// checked for correspondence with  an attribute of the present environment.
//   938	// If the system treats the attribute as unknown, the return flag is false;
//   939	// otherwise, the flag is true and i*x returned is the of the type specified in
//   940	// the table for the attribute queried.
//   941	void _environment(void) {
//   942	  char length = (char)dStack_pop();
//   943	  char* pStr = (char*)dStack_pop();
//   944	  if (length && length < BUFFER_SIZE) {
//   945	    if (!strcmp_P(pStr, PSTR("/counted-string"))) {
//   946	      dStack_push(BUFFER_SIZE);
//   947	      return;
//   948	    }
//   949	    if (!strcmp_P(pStr, PSTR("/hold"))) {
//   950	      dStack_push(HOLD_SIZE);
//   951	      return;
//   952	    }
//   953	    if (!strcmp_P(pStr, PSTR("address-unit-bits"))) {
//   954	      dStack_push(sizeof(void *) * 8);
//   955	      return;
//   956	    }
//   957	    if (!strcmp_P(pStr, PSTR("core"))) {
//   958	      dStack_push(CORE);
//   959	      return;
//   960	    }
//   961	    if (!strcmp_P(pStr, PSTR("core-ext"))) {
//   962	      dStack_push(CORE_EXT);
//   963	      return;
//   964	    }
//   965	    if (!strcmp_P(pStr, PSTR("floored"))) {
//   966	      dStack_push(FLOORED);
//   967	      return;
//   968	    }
//   969	    if (!strcmp_P(pStr, PSTR("max-char"))) {
//   970	      dStack_push(MAX_CHAR);
//   971	      return;
//   972	    }
//   973	#if DOUBLE
//   974	    if (!strcmp_P(pStr, PSTR("max-d"))) {
//   975	      dStack_push(MAX_OF(dcell_t));
//   976	      return;
//   977	    }
//   978	#endif
//   979	    if (!strcmp_P(pStr, PSTR("max-n"))) {
//   980	      dStack_push(MAX_OF(cell_t));
//   981	      return;
//   982	    }
//   983	    if (!strcmp_P(pStr, PSTR("max-u"))) {
//   984	      dStack_push(MAX_OF(ucell_t));
//   985	      return;
//   986	    }
//   987	#if DOUBLE
//   988	    if (!strcmp_P(pStr, PSTR("max-ud"))) {
//   989	      dStack_push(MAX_OF(udcell_t));
//   990	      return;
//   991	    }
//   992	#endif
//   993	    if (!strcmp_P(pStr, PSTR("return-stack-size"))) {
//   994	      dStack_push(RSTACK_SIZE);
//   995	      return;
//   996	    }
//   997	    if (!strcmp_P(pStr, PSTR("stack-size"))) {
//   998	      dStack_push(STACK_SIZE);
//   999	      return;
//  1000	    }
//  1001	  }
//  1002	  dStack_push(-13);
//  1003	  _throw();
//  1004	}
//  1005	
//  1006	extern const char evaluate_str[] = "evaluate";
//  1007	// ( i*x c-addr u  -- j*x )
//  1008	// Save the current input source specification. Store minus-one (-1) in SOURCE-ID
//  1009	// if it is present. Make the string described by c-addr and u both the input
//  1010	// source and input buffer, set >IN to zero, and interpret. When the parse area
//  1011	// is empty, restore the prior source specification. Other stack effects are due
//  1012	// to the words EVALUATEd.
//  1013	void _evaluate(void) {
//  1014	  char* tempSource = cpSource;
//  1015	  char* tempSourceEnd = cpSourceEnd;
//  1016	  char* tempToIn = cpToIn;
//  1017	
//  1018	  uint8_t length = dStack_pop();
//  1019	  cpSource = (char*)dStack_pop();
//  1020	  cpSourceEnd = cpSource + length;
//  1021	  cpToIn = cpSource;
//  1022	  interpreter();
//  1023	  cpSource = tempSource;
//  1024	  cpSourceEnd = tempSourceEnd;
//  1025	  cpToIn = tempToIn;
//  1026	}
//  1027	
//  1028	extern const char execute_str[] = "execute";
//  1029	// ( i*x xt -- j*x )
//  1030	// Remove xt from the stack and preform the semantics identified by it. Other
//  1031	// stack effects are due to the word EXECUTEd
//  1032	void _execute(void) {
//  1033	  func function;
//  1034	  w = dStack_pop();
//  1035	  if (w > 255) {
//  1036	    // rpush(0);
//  1037	    rStack_push((cell_t) ip);        // CAL - Push our return address
//  1038	    ip = (cell_t *)w;          // set the ip to the XT (memory location)
//  1039	    executeWord();
//  1040	  } else {
//  1041	    function = flashDict[w - 1].function;
//  1042	    function();
//  1043	    if (errorCode) return;
//  1044	  }
//  1045	}
//  1046	
//  1047	extern const char exit_str[] = "exit";
//  1048	// Interpretation: undefined
//  1049	// Execution: ( -- ) (R: nest-sys -- )
//  1050	// Return control to the calling definition specified by nest-sys. Before
//  1051	// executing EXIT within a do-loop, a program shall discard the loop-control
//  1052	// parameters by executing UNLOOP.
//  1053	void _exit(void) {
//  1054	  ip = (cell_t*)rStack_pop();
//  1055	}
//  1056	
//  1057	extern const char fill_str[] = "fill";
//  1058	// ( c-addr u char -- )
//  1059	// if u is greater than zero, store char in u consecutive characters of memory
//  1060	// beginning with c-addr.
//  1061	void _fill(void) {
//  1062	  char ch = (char)dStack_pop();
//  1063	  cell_t limit = dStack_pop();
//  1064	  char* addr = (char*)dStack_pop();
//  1065	  for (int i = 1; i < limit; i++) {
//  1066	    *addr++ = ch;
//  1067	  }
//  1068	}
//  1069	
//  1070	extern const char find_str[] = "find";
//  1071	// ( c-addr -- c-addr 0 | xt 1 | xt -1)
//  1072	// Find the definition named in the counted string at c-addr. If the definition
//  1073	// is not found, return c-addr and zero. If the definition is found, return its
//  1074	// execution token xt. If the definition is immediate, also return one (1),
//  1075	// otherwise also return minus-one (-1).
//  1076	void _find(void) {
//  1077	  uint8_t index = 0;
//  1078	
//  1079	  cell_t *addr = (cell_t *)dStack_pop();
//  1080	  cell_t length = *addr++;
//  1081	
//  1082	  char *ptr = (char*) addr;
//  1083	  if (length = 0) {
//  1084	    dStack_push(-16);
//  1085	    _throw();
//  1086	    return;
//  1087	  } else if (length > BUFFER_SIZE) {
//  1088	    dStack_push(-18);
//  1089	    _throw();
//  1090	    return;
//  1091	  }
//  1092	
//  1093	  pUserEntry = pLastUserEntry;
//  1094	  // First search through the user dictionary
//  1095	  while (pUserEntry) {
//  1096	    if (strcmp(pUserEntry->name, ptr) == 0) {
//  1097	      length = strlen(pUserEntry->name);
//  1098	      dStack_push((size_t)pUserEntry->cfa);
//  1099	      wordFlags = pUserEntry->flags;
//  1100	      if (wordFlags & IMMEDIATE) dStack_push(1);
//  1101	      else dStack_push(-1);
//  1102	      return;
//  1103	    }
//  1104	    pUserEntry = (userEntry_t*)pUserEntry->prevEntry;
//  1105	  }
//  1106	  // Second Search through the flash Dictionary
//  1107	  while (flashDict[index].name) {
//  1108	    if (!strcasecmp(ptr, flashDict[index].name)) {
//  1109	      dStack_push(index + 1);
//  1110	      wordFlags = flashDict[index].flags;
//  1111	      if (wordFlags & IMMEDIATE) dStack_push(1);
//  1112	      else dStack_push(-1);
//  1113	      return;
//  1114	    }
//  1115	    index++;
//  1116	  }
//  1117	  dStack_push((size_t)ptr);
//  1118	  dStack_push(0);
//  1119	}
//  1120	
//  1121	extern const char fm_slash_mod_str[] = "fm/mod";
//  1122	// ( d1 n1 -- n2 n3 )
//  1123	// Divide d1 by n1, giving the floored quotient n3 and remainder n2.
//  1124	void _fm_slash_mod(void) {
//  1125	  cell_t n1 = dStack_pop();
//  1126	  cell_t d1 = dStack_pop();
//  1127	  dStack_push(d1 /  n1);
//  1128	  dStack_push(d1 %  n1);
//  1129	}
//  1130	
//  1131	extern const char here_str[] = "here";
//  1132	// ( -- addr )
//  1133	// addr is the data-space pointer.
//  1134	void _here(void) {
//  1135	  dStack_push((size_t)pHere);
//  1136	}
//  1137	
//  1138	extern const char hold_str[] = "hold";
//  1139	// ( char -- )
//  1140	// add char to the beginning of the pictured numeric output string.
//  1141	void _hold(void) {
//  1142	  if (flags & NUM_PROC) {
//  1143	    *--pPNO = (char) dStack_pop();
//  1144	  }
//  1145	}
//  1146	
//  1147	extern const char i_str[] = "i";
//  1148	// Interpretation: undefined
//  1149	// Execution: ( -- n|u ) (R: loop-sys -- loop-sys )
//  1150	void _i(void) {
//  1151	  dStack_push(rStack_peek(1));
//  1152	}
//  1153	
//  1154	extern const char if_str[] = "if";
//  1155	// Compilation: (C: -- orig )
//  1156	// Run-Time: ( x -- )
//  1157	void _if(void) {
//  1158	  *pHere++ = ZJUMP_IDX;
//  1159	  *pHere = 0;
//  1160	  dStack_push((size_t)pHere++);
//  1161	}
//  1162	
//  1163	extern const char immediate_str[] = "immediate";
//  1164	// ( -- )
//  1165	// make the most recent definition an immediate word.
//  1166	void _immediate(void) {
//  1167	  if (pLastUserEntry) {
//  1168	    pLastUserEntry->flags |= IMMEDIATE;
//  1169	  }
//  1170	}
//  1171	
//  1172	extern const char invert_str[] = "invert";
//  1173	// ( x1 -- x2 )
//  1174	// invert all bits in x1, giving its logical inverse x2
//  1175	void _invert(void)   {
//  1176	  dStack_push(~dStack_pop());
//  1177	}
//  1178	
//  1179	extern const char j_str[] = "j";
//  1180	// Interpretation: undefined
//  1181	// Execution: ( -- n|u ) (R0: loop-sys1 loop-sys2 -- loop-sys1 loop-sys2 )
//  1182	// n|u is a copy of the next-outer loop index. An ambiguous condition exists
//  1183	// if the loop control parameters of the next-outer loop, loop-sys1, are
//  1184	// unavailable.
//  1185	void _j(void) {
//  1186	  dStack_push(rStack_peek(4));
//  1187	}
//  1188	
//  1189	extern const char key_str[] = "key";
//  1190	// ( -- char )
//  1191	void _key(void) {
//  1192	  dStack_push(getKey());
//  1193	}
//  1194	
//  1195	extern const char leave_str[] = "leave";
//  1196	// Interpretation: undefined
//  1197	// Execution: ( -- ) (R: loop-sys -- )
//  1198	void _leave(void) {
//  1199	  *pHere++ = LEAVE_SYS_IDX;
//  1200	  *pHere++ = 0;
//  1201	}
//  1202	
//  1203	extern const char literal_str[] = "literal";
//  1204	// Interpretation: undefined
//  1205	// Compilation: ( x -- )
//  1206	// Run-Time: ( -- x )
//  1207	// Place x on the stack
//  1208	void _literal(void) {
//  1209	  if (state) {
//  1210	    *pHere++ = LITERAL_IDX;
//  1211	    *pHere++ = dStack_pop();
//  1212	  } else {
//  1213	    dStack_push(*ip++);
//  1214	  }
//  1215	}
//  1216	
//  1217	extern const char loop_str[] = "loop";
//  1218	// Interpretation: undefined
//  1219	// Compilation: (C: do-sys -- )
//  1220	// Run-Time: ( -- ) (R: loop-sys1 -- loop-sys2 )
//  1221	void _loop(void) {
//  1222	  *pHere++ = LOOP_SYS_IDX;
//  1223	  cell_t start_addr = dStack_pop();
//  1224	  *pHere++ = start_addr;
//  1225	  cell_t stop_addr = (cell_t)pHere;
//  1226	  cell_t* ptr = (cell_t*)start_addr;
//  1227	  do {
//  1228	    if (*ptr++ == LEAVE_SYS_IDX) {
//  1229	      if (*ptr == 0) {
//  1230	        *ptr = stop_addr;
//  1231	      }
//  1232	    }
//  1233	  } while (ptr != (cell_t*)stop_addr);
//  1234	  if ( dStack_pop() != DO_SYS) {
//  1235	    dStack_push(-22);
//  1236	    _throw();
//  1237	  }
//  1238	}
//  1239	
//  1240	extern const char lshift_str[] = "lshift";
//  1241	// ( x1 u -- x2 )
//  1242	// x2 is x1 shifted to left by u positions.
//  1243	void _lshift(void) {
//  1244	  cell_t u = dStack_pop();
//  1245	  cell_t x1 = dStack_pop();
//  1246	  dStack_push(x1 << u);
//  1247	}
//  1248	
//  1249	extern const char m_star_str[] = "m*";
//  1250	// ( n1 n2 -- d )
//  1251	// d is the signed product of n1 times n2.
//  1252	void _m_star(void) {
//  1253	  dStack_push(dStack_pop() * dStack_pop());
//  1254	}
//  1255	
//  1256	extern const char max_str[] = "max";
//  1257	// ( n1 n2 -- n3 )
//  1258	// n3 is the greater of of n1 or n2.
//  1259	void _max(void) {
//  1260	  cell_t n2 = dStack_pop();
//  1261	  cell_t n1 = dStack_pop();
//  1262	  if (n1 > n2) dStack_push(n1);
//  1263	  else dStack_push(n2);
//  1264	}
//  1265	
//  1266	extern const char min_str[] = "min";
//  1267	// ( n1 n2 -- n3 )
//  1268	// n3 is the lesser of of n1 or n2.
//  1269	void _min(void) {
//  1270	  cell_t n2 = dStack_pop();
//  1271	  cell_t n1 = dStack_pop();
//  1272	  if (n1 > n2) dStack_push(n2);
//  1273	  else dStack_push(n1);
//  1274	}
//  1275	
//  1276	extern const char mod_str[] = "mod";
//  1277	// ( n1 n2 -- n3 )
//  1278	// Divide n1 by n2 giving the remainder n3.
//  1279	void _mod(void) {
//  1280	  cell_t temp = dStack_pop();
//  1281	  dStack_push(dStack_pop() %  temp);
//  1282	}
//  1283	
//  1284	extern const char move_str[] = "move";
//  1285	// ( addr1 addr2 u -- )
//  1286	// if u is greater than zero, copy the contents of u consecutive address
//  1287	// starting at addr1 to u consecutive address starting at addr2.
//  1288	void _move(void) {
//  1289	  cell_t u = dStack_pop();
//  1290	  cell_t* to = (cell_t*)dStack_pop();
//  1291	  cell_t* from = (cell_t*)dStack_pop();
//  1292	  for (cell_t i = 0; i < u; i++) {
//  1293	    *to++ = *from++;
//  1294	  }
//  1295	}
//  1296	
//  1297	extern const char negate_str[] = "negate";
//  1298	// ( n1 -- n2 )
//  1299	// Negate n1, giving its arithmetic inverse n2.
//  1300	void _negate(void) {
//  1301	  dStack_push(-dStack_pop());
//  1302	}
//  1303	
//  1304	extern const char or_str[] = "or";
//  1305	// ( x1 x2 -- x3 )
//  1306	// x3 is the bit by bit logical or of x1 with x2
//  1307	void _or(void) {
//  1308	  dStack_push(dStack_pop() |  dStack_pop());
//  1309	}
//  1310	
//  1311	extern const char over_str[] = "over";
//  1312	// ( x1 x2 -- x1 x2 x1 )
//  1313	void _over(void) {
//  1314	  dStack_push(dStack_peek(1));
//  1315	}
//  1316	
//  1317	extern const char postpone_str[] = "postpone";
//  1318	// Compilation: ( "<spaces>name" -- )
//  1319	// Skip leading space delimiters. Parse name delimited by a space. Find name.
//  1320	// Append the compilation semantics of name to the current definition. An
//  1321	// ambiguous condition exists if name is not found.
//  1322	void _postpone(void) {
//  1323	  func function;
//  1324	  if (!getToken()) {
//  1325	    dStack_push(-16);
//  1326	    _throw();
//  1327	  }
//  1328	  if (isWord(cTokenBuffer)) {
//  1329	    if (wordFlags & COMP_ONLY) {
//  1330	      if (w > 255) {
//  1331	        rStack_push(0);            // Push 0 as our return address
//  1332	        ip = (cell_t *)w;          // set the ip to the XT (memory location)
//  1333	        executeWord();
//  1334	      } else {
//  1335	        function = flashDict[w - 1].function;
//  1336	        function();
//  1337	        if (errorCode) return;
//  1338	      }
//  1339	    } else {
//  1340	      *pHere++ = (cell_t)w;
//  1341	    }
//  1342	  } else {
//  1343	    dStack_push(-13);
//  1344	    _throw();
//  1345	    return;
//  1346	  }
//  1347	}
//  1348	
//  1349	extern const char quit_str[] = "quit";
//  1350	// ( -- ) (R: i*x -- )
//  1351	// Empty the return stack, store zero in SOURCE-ID if it is present,
//  1352	// make the user input device the input source, enter interpretation state.
//  1353	void _quit(void) {
//  1354	  rStack_clear();
//  1355	  *cpToIn = 0;          // Terminate buffer to stop interpreting
//  1356	  Serial.flush();
//  1357	}
//  1358	
//  1359	extern const char r_from_str[] = "r>";
//  1360	// Interpretation: undefined
//  1361	// Execution: ( -- x ) (R: x -- )
//  1362	// move x from the return stack to the data stack.
//  1363	void _r_from(void) {
//  1364	  dStack_push(rStack_pop());
//  1365	}
//  1366	
//  1367	extern const char r_fetch_str[] = "r@";
//  1368	// Interpretation: undefined
//  1369	// Execution: ( -- x ) (R: x -- x)
//  1370	// Copy x from the return stack to the data stack.
//  1371	void _r_fetch(void) {
//  1372	  dStack_push(rStack_peek(0));
//  1373	}
//  1374	
//  1375	extern const char recurse_str[] = "recurse";
//  1376	// Interpretation: Interpretation semantics for this word are undefined
//  1377	// Compilation: ( -- )
//  1378	// Append the execution semantics of the current definition to the current
//  1379	// definition. An ambiguous condition exists if RECURSE appends in a definition
//  1380	// after DOES>.
//  1381	void _recurse(void) {
//  1382	  *pHere++ = (size_t)pCodeStart;
//  1383	}
//  1384	
//  1385	extern const char repeat_str[] = "repeat";
//  1386	// Interpretation: undefined
//  1387	// Compilation: (C: orig dest -- )
//  1388	// Run-Time ( -- )
//  1389	// Continue execution at the location given.
//  1390	void _repeat(void) {
//  1391	  cell_t dest;
//  1392	  cell_t* orig;
//  1393	  *pHere++ = JUMP_IDX;
//  1394	  *pHere++ = dStack_pop() - (size_t)pHere;
//  1395	  orig = (cell_t*)dStack_pop();
//  1396	  *orig = (size_t)pHere - (size_t)orig;
//  1397	}
//  1398	
//  1399	extern const char rot_str[] = "rot";
//  1400	// ( x1 x2 x3 -- x2 x3 x1)
//  1401	void _rot(void) {
//  1402	  cell_t x3 = dStack_pop();
//  1403	  cell_t x2 = dStack_pop();
//  1404	  cell_t x1 = dStack_pop();
//  1405	  dStack_push(x2);
//  1406	  dStack_push(x3);
//  1407	  dStack_push(x1);
//  1408	}
//  1409	
//  1410	extern const char rshift_str[] = "rshift";
//  1411	// ( x1 u -- x2 )
//  1412	// x2 is x1 shifted to right by u positions.
//  1413	void _rshift(void) {
//  1414	  cell_t u = dStack_pop();
//  1415	  cell_t x1 = dStack_pop();
//  1416	  dStack_push((ucell_t)x1 >> u);
//  1417	}
//  1418	
//  1419	extern const char s_quote_str[] = "s\x22"; 
//  1420	// Interpretation: Interpretation semantics for this word are undefined.
//  1421	// Compilation: ("ccc<quote>" -- )
//  1422	// Parse ccc delimited by ". Append the run-time semantics given below to the
//  1423	// current definition.
//  1424	// Run-Time: ( -- c-addr u )
//  1425	// Return c-addr and u describing a string consisting of the characters ccc. A program
//  1426	// shall not alter the returned string.
//  1427	void _s_quote(void) {
//  1428	  uint8_t i;
//  1429	  char length;
//  1430	  if (flags & EXECUTE) {
//  1431	    dStack_push((size_t)ip);
//  1432	    cell_t len = strlen((char*)ip);
//  1433	    dStack_push(len++);    // increment for the null terminator
//  1434	    ALIGN(len);
//  1435	    ip = (cell_t*)((size_t)ip + len);
//  1436	  }
//  1437	  else if (state) {
//  1438	    cDelimiter = '"';
//  1439	    if (!getToken()) {
//  1440	      dStack_push(-16);
//  1441	      _throw();
//  1442	    }
//  1443	    length = strlen(cTokenBuffer);
//  1444	    *pHere++ = S_QUOTE_IDX;
//  1445	    char *ptr = (char*)pHere;
//  1446	    for (uint8_t i = 0; i < length; i++) {
//  1447	      *ptr++ = cTokenBuffer[i];
//  1448	    }
//  1449	    *ptr++ = '\0';    // Terminate String
//  1450	    pHere = (cell_t *)ptr;
//  1451	    ALIGN_P(pHere);  // re- align pHere for any new code
//  1452	    cDelimiter = ' ';
//  1453	  }
//  1454	}
//  1455	
//  1456	extern const char s_to_d_str[] = "s>d";
//  1457	// ( n -- d )
//  1458	void _s_to_d(void) {
//  1459	  cell_t n = dStack_pop();
//  1460	  dStack_push(n);
//  1461	  dStack_push(0);
//  1462	}
//  1463	
//  1464	extern const char sign_str[] = "sign";
//  1465	// ( n -- )
//  1466	void _sign(void) {
//  1467	  if (flags & NUM_PROC) {
//  1468	    cell_t sign = dStack_pop();
//  1469	    if (sign < 0) *--pPNO = '-';
//  1470	  }
//  1471	}
//  1472	
//  1473	extern const char sm_slash_rem_str[] = "sm/rem";
//  1474	// ( d1 n1 -- n2 n3 )
//  1475	// Divide d1 by n1, giving the symmetric quotient n3 and remainder n2.
//  1476	void _sm_slash_rem(void) {
//  1477	  cell_t n1 = dStack_pop();
//  1478	  cell_t d1 = dStack_pop();
//  1479	  dStack_push(d1 /  n1);
//  1480	  dStack_push(d1 %  n1);
//  1481	}
//  1482	
//  1483	extern const char source_str[] = "source";
//  1484	// ( -- c-addr u )
//  1485	// c-addr is the address of, and u is the number of characters in, the input buffer.
//  1486	void _source(void) {
//  1487	  dStack_push((size_t)&cInputBuffer);
//  1488	  dStack_push(strlen(cInputBuffer));
//  1489	}
//  1490	
//  1491	extern const char space_str[] = "space";
//  1492	// ( -- )
//  1493	// Display one space
//  1494	void _space(void) {
//  1495	  Serial.print(sp_str);
//  1496	}
//  1497	
//  1498	extern const char spaces_str[] = "spaces";
//  1499	// ( n -- )
//  1500	// if n is greater than zero, display n space
//  1501	void _spaces(void) {
//  1502	  char n = (char) dStack_pop();
//  1503	  while (n > 0) {
//  1504	    Serial.print(sp_str);
//  1505	    n--;
//  1506	  }
//  1507	}
//  1508	
//  1509	extern const char state_str[] = "state";
//  1510	// ( -- a-addr )
//  1511	// a-addr is the address of the cell containing compilation state flag.
//  1512	void _state(void) {
//  1513	  dStack_push((size_t)&state);
//  1514	}
//  1515	
//  1516	extern const char swap_str[] = "swap";
//  1517	void _swap(void) { // x y -- y x
//  1518	  cell_t x, y;
//  1519	
//  1520	  y = dStack_pop();
//  1521	  x = dStack_pop();
//  1522	  dStack_push(y);
//  1523	  dStack_push(x);
//  1524	}
//  1525	
//  1526	extern const char then_str[] = "then";
//  1527	// Interpretation: Undefine
//  1528	// Compilation: (C: orig -- )
//  1529	// Run-Time: ( -- )
//  1530	void _then(void) {
//  1531	  cell_t* orig = (cell_t*)dStack_pop();
//  1532	  *orig = (size_t)pHere - (size_t)orig;
//  1533	}
//  1534	
//  1535	extern const char type_str[] = "type";
//  1536	// ( c-addr u -- )
//  1537	// if u is greater than zero display character string specified by c-addr and u
//  1538	void _type(void) {
//  1539	  uint8_t length = (uint8_t)dStack_pop();
//  1540	  char* addr = (char*)dStack_pop();
//  1541	  for (char i = 0; i < length; i++)
//  1542	    Serial.print(*addr++);
//  1543	}
//  1544	
//  1545	extern const char u_dot_str[] = "u.";
//  1546	// ( u -- )
//  1547	// Displau u in free field format
//  1548	// tested and fixed by Alex Moskovskij
//  1549	void _u_dot(void) {
//  1550	  Serial.print((ucell_t) dStack_pop());
//  1551	  Serial.print(F(" "));
//  1552	}
//  1553	
//  1554	extern const char u_lt_str[] = "u<";
//  1555	// ( u1 u2 -- flag )
//  1556	// flag is true if and only if u1 is less than u2.
//  1557	void _u_lt(void) {
//  1558	  if ((ucell_t)dStack_pop() > ucell_t(dStack_pop())) dStack_push(TRUE);
//  1559	  else dStack_push(FALSE);
//  1560	}
//  1561	
//  1562	extern const char um_star_str[] = "um*";
//  1563	// ( u1 u2 -- ud )
//  1564	// multiply u1 by u2, giving the unsigned double-cell product ud
//  1565	void _um_star(void) {
//  1566	  ucell_t u2 = (ucell_t)dStack_pop();
//  1567	  ucell_t u1 = (ucell_t)dStack_pop();
//  1568	  udcell_t ud = (udcell_t)u1 * (udcell_t)u2;
//  1569	  ucell_t lsb = ud;
//  1570	  ucell_t msb = (ud >> sizeof(ucell_t) * 8);
//  1571	  dStack_push(lsb);
//  1572	  dStack_push(msb);
//  1573	}
//  1574	
//  1575	extern const char um_slash_mod_str[] = "um/mod";
//  1576	// ( ud u1 -- u2 u3 )
//  1577	// Divide ud by u1 giving quotient u3 and remainder u2.
//  1578	void _um_slash_mod(void) {
//  1579	  ucell_t u1 = dStack_pop();
//  1580	  udcell_t lsb = dStack_pop();
//  1581	  udcell_t msb = dStack_pop();
//  1582	  udcell_t ud = (msb << 16) + (lsb);
//  1583	  dStack_push(ud % u1);
//  1584	  dStack_push(ud / u1);
//  1585	}
//  1586	
//  1587	extern const char unloop_str[] = "unloop";
//  1588	// Interpretation: Undefine
//  1589	// Execution: ( -- )(R: loop-sys -- )
//  1590	void _unloop(void) {
//  1591	  Serial.print(not_done_str); 
//  1592	  rStack_pop();
//  1593	  rStack_pop();
//  1594	  if (rStack_pop() != LOOP_SYS) {
//  1595	    dStack_push(-22);
//  1596	    _throw();
//  1597	  }
//  1598	}
//  1599	
//  1600	extern const char until_str[] = "until";
//  1601	// Interpretation: Undefine
//  1602	// Compilation: (C: dest -- )
//  1603	// Run-Time: ( x -- )
//  1604	void _until(void) {
//  1605	  *pHere++ = ZJUMP_IDX;
//  1606	  *pHere = dStack_pop() - (size_t)pHere;
//  1607	  pHere += 1;
//  1608	}
//  1609	
//  1610	extern const char variable_str[] = "variable";
//  1611	// ( "<spaces>name" -- )
//  1612	// Parse name delimited by a space. Create a definition for name with the
//  1613	// execution semantics defined below. Reserve one cell of data space at an
//  1614	// aligned address.
//  1615	// name Execution: ( -- a-addr )
//  1616	// a-addr is the address of the reserved cell. A program is responsible for
//  1617	// initializing the contents of a reserved cell.
//  1618	void _variable(void) {
//  1619	  if (flags & EXECUTE) {
//  1620	    dStack_push((size_t)ip++);
//  1621	  } else {
//  1622	    openEntry();
//  1623	    *pHere++ = VARIABLE_IDX;
//  1624	    *pHere++ = 0;
//  1625	    closeEntry();
//  1626	  }
//  1627	}
//  1628	
//  1629	extern const char while_str[] = "while";
//  1630	// Interpretation: Undefine
//  1631	// Compilation: (C: dest -- orig dest )
//  1632	// Run-Time: ( x -- )
//  1633	void _while(void) {
//  1634	  ucell_t dest;
//  1635	  ucell_t orig;
//  1636	  dest = dStack_pop();
//  1637	  *pHere++ = ZJUMP_IDX;
//  1638	  orig = (size_t)pHere;
//  1639	  *pHere++ = 0;
//  1640	  dStack_push(orig);
//  1641	  dStack_push(dest);
//  1642	}
//  1643	
//  1644	extern const char word_str[] = "word";
//  1645	// ( char "<chars>ccc<chars>" -- c-addr )
//  1646	// Skip leading delimiters. Parse characters ccc delimited by char. An ambiguous
//  1647	// condition exists if the length of the parsed string is greater than the
//  1648	// implementation-defined length of a counted string.
//  1649	//
//  1650	// c-addr is the address of a transient region containing the parsed word as a
//  1651	// counted string. If the parse area was empty or contained no characters other than
//  1652	// the delimiter, the resulting string has a zero length. A space, not included in
//  1653	// the length, follows the string. A program may replace characters within the
//  1654	// string.
//  1655	//
//  1656	// NOTE: The requirement to follow the string with a space is obsolescent and is
//  1657	// included as a concession to existing programs that use CONVERT. A program shall
//  1658	// not depend on the existence of the space.
//  1659	void _word(void) {
//  1660	  uint8_t *start, *ptr;
//  1661	
//  1662	  cDelimiter = (char)dStack_pop();
//  1663	  start = (uint8_t *)pHere++;
//  1664	  ptr = (uint8_t *)pHere;
//  1665	  while (cpToIn <= cpSourceEnd) {
//  1666	    if (*cpToIn == cDelimiter || *cpToIn == 0) {
//  1667	      *((cell_t *)start) = (ptr - start) - sizeof(cell_t); // write the length byte
//  1668	      pHere = (cell_t *)start;                     // reset pHere (transient memory)
//  1669	      dStack_push((size_t)start);                // push the c-addr onto the stack
//  1670	      cpToIn++;
//  1671	      break;
//  1672	    } else *ptr++ = *cpToIn++;
//  1673	  }
//  1674	  cDelimiter = ' ';
//  1675	}
//  1676	
//  1677	extern const char xor_str[] = "xor";
//  1678	// ( x1 x2 -- x3 )
//  1679	// x3 is the bit by bit exclusive or of x1 with x2
//  1680	void _xor(void) {
//  1681	  dStack_push(dStack_pop() ^  dStack_pop());
//  1682	}
//  1683	
//  1684	extern const char left_bracket_str[] = "[";
//  1685	// Interpretation: undefined
//  1686	// Compilation: Preform the execution semantics given below
//  1687	// Execution: ( -- )
//  1688	// Enter interpretation state. [ is an immediate word.
//  1689	void _left_bracket(void) {
//  1690	  state = FALSE;
//  1691	}
//  1692	
//  1693	extern const char bracket_tick_str[] = "[']";
//  1694	// Interpretation: Interpretation semantics for this word are undefined.
//  1695	// Compilation: ( "<space>name" -- )
//  1696	// Skip leading space delimiters. Parse name delimited by a space. Find name.
//  1697	// Append the run-time semantics given below to the current definition.
//  1698	// An ambiguous condition exist if name is not found.
//  1699	// Run-Time: ( -- xt )
//  1700	// Place name's execution token xt on the stack. The execution token returned
//  1701	// by the compiled phrase "['] X" is the same value returned by "' X" outside
//  1702	// of compilation state.
//  1703	void _bracket_tick(void) {
//  1704	  if (!getToken()) {
//  1705	    dStack_push(-16);
//  1706	    _throw();
//  1707	  }
//  1708	  if (isWord(cTokenBuffer)) {
//  1709	    *pHere++ = LITERAL_IDX;
//  1710	    *pHere++ = w;
//  1711	  } else {
//  1712	    dStack_push(-13);
//  1713	    _throw();
//  1714	    return;
//  1715	  }
//  1716	}
//  1717	
//  1718	extern const char bracket_char_str[] = "[char]";
//  1719	// Interpretation: Interpretation semantics for this word are undefined.
//  1720	// Compilation: ( "<space>name" -- )
//  1721	// Skip leading spaces delimiters. Parse name delimited by a space. Append
//  1722	// the run-time semantics given below to the current definition.
//  1723	// Run-Time: ( -- char )
//  1724	// Place char, the value of the first character of name, on the stack.
//  1725	void _bracket_char(void) {
//  1726	  if (getToken()) {
//  1727	    *pHere++ = LITERAL_IDX;
//  1728	    *pHere++ = cTokenBuffer[0];
//  1729	  } else {
//  1730	    dStack_push(-16);
//  1731	    _throw();
//  1732	  }
//  1733	}
//  1734	
//  1735	extern const char right_bracket_str[] = "]";
//  1736	// ( -- )
//  1737	// Enter compilation state.
//  1738	void _right_bracket(void) {
//  1739	  state = TRUE;
//  1740	}
//  1741	
//  1742	/*******************************************************************************/
//  1743	/**                          Core Extension Set                               **/
//  1744	/*******************************************************************************/
//  1745	#ifdef CORE_EXT_SET
//  1746	extern const char dot_paren_str[] = ".(";
//  1747	// ( "ccc<paren>" -- )
//  1748	// Parse and display ccc delimitied by ) (right parenthesis). ,( is an imedeate
//  1749	// word
//  1750	void _dot_paren(void) { 
//  1751	  dStack_push(')');
//  1752	  _word();
//  1753	  _count();
//  1754	  _type();
//  1755	}
//  1756	
//  1757	extern const char zero_not_equal_str[] = "0<>";
//  1758	// ( x -- flag)
//  1759	// flag is true if and only if x is not equal to zero. 
//  1760	void _zero_not_equal(void) { 
//  1761	  w = dStack_pop();
//  1762	  if (w == 0) dStack_push(FALSE);
//  1763	  else dStack_push(TRUE);
//  1764	}
//  1765	
//  1766	extern const char zero_greater_str[] = "0>";
//  1767	// (n -- flag)
//  1768	// flag is true if and only if n is greater than zero.
//  1769	void _zero_greater(void) {
//  1770	  w = dStack_pop();
//  1771	  if (w > 0) dStack_push(TRUE);
//  1772	  else dStack_push(FALSE);
//  1773	}
//  1774	
//  1775	extern const char two_to_r_str[] = "2>r";
//  1776	// Interpretation: Interpretation semantics for this word are undefined. 
//  1777	// Execution: ( x1 x2 -- ) ( R:  -- x1 x2 )
//  1778	// Transfer cell pair x1 x2 to the return stack.  Semantically equivalent
//  1779	// to SWAP >R >R.
//  1780	void _two_to_r(void) {
//  1781	  _swap();
//  1782	  _to_r();
//  1783	  _to_r();
//  1784	}
//  1785	
//  1786	extern const char two_r_from_str[] = "2r>";
//  1787	// Interpretation: Interpretation semantics for this word are undefined. 
//  1788	// Execution: ( -- x1 x2 )  ( R:  x1 x2 -- ) 
//  1789	// Transfer cell pair x1 x2 from the return stack.  Semantically equivalent to
//  1790	// R> R> SWAP. 
//  1791	void _two_r_from(void) {
//  1792	  _r_from();
//  1793	  _r_from();
//  1794	  _swap();
//  1795	}
//  1796	
//  1797	extern const char two_r_fetch_str[] = "2r@";
//  1798	// Interpretation: Interpretation semantics for this word are undefined. 
//  1799	// Execution: ( -- x1 x2 )  ( R:  x1 x2 -- x1 x2 ) 
//  1800	// Copy cell pair x1 x2 from the return stack.  Semantically equivalent to
//  1801	// R> R> 2DUP >R >R SWAP. 
//  1802	void _two_r_fetch(void) {
//  1803	  _r_from();
//  1804	  _r_from();
//  1805	  _two_dup();
//  1806	  _to_r();
//  1807	  _to_r();
//  1808	  _swap();
//  1809	}
//  1810	
//  1811	extern const char colon_noname_str[] = ":noname";
//  1812	// ( C:  -- colon-sys )  ( S:  -- xt )
//  1813	// Create an execution token xt, enter compilation state and start the current
//  1814	// definition, producing colon-sys.  Append the initiation semantics given 
//  1815	// below to the current definition. 
//  1816	// The execution semantics of xt will be determined by the words compiled into
//  1817	// the body of the definition.  This definition can be executed later by using
//  1818	// xt EXECUTE.
//  1819	// If the control-flow stack is implemented using the data stack, colon-sys 
//  1820	// shall be the topmost item on the data stack.  See 3.2.3.2 Control-flow stack.
//  1821	//
//  1822	// Initiation: ( i*x -- i*x )  ( R:  -- nest-sys )
//  1823	// Save implementation-dependent information nest-sys about the calling 
//  1824	// definition.  The stack effects i*x represent arguments to xt. 
//  1825	//
//  1826	// xt Execution: ( i*x -- j*x )
//  1827	// Execute the definition specified by xt.  The stack effects i*x and j*x 
//  1828	// represent arguments to and results from xt, respectively.  
//  1829	//void _colon_noname(void) {
//  1830	//  state = TRUE;
//  1831	//  push(COLON_SYS);
//  1832	//  openEntry();
//  1833	//}
//  1834	
//  1835	extern const char neq_str[] = "<>";
//  1836	// (x1 x2 -- flag)
//  1837	// flag is true if and only if x1 is not bit-for-bit the same as x2.
//  1838	void _neq(void) {
//  1839	  cell_t x2 = dStack_pop();
//  1840	  cell_t x1 = dStack_pop();
//  1841	  if (x1 != x2) dStack_push(TRUE);
//  1842	  else dStack_push(FALSE); 
//  1843	}
//  1844	
//  1845	extern const char hex_str[] = "hex";
//  1846	// ( -- )
//  1847	// Set BASE to 16
//  1848	void _hex(void) { // value --
//  1849	  base = HEX;
//  1850	}
//  1851	
//  1852	extern const char case_str[] = "case";
//  1853	// Contributed by Craig Lindley
//  1854	// Interpretation semantics for this word are undefined.
//  1855	// Compilation: ( C: -- case-sys )
//  1856	// Mark the start of the CASE ... OF ... ENDOF ... ENDCASE structure. Append the run-time
//  1857	// semantics given below to the current definition.
//  1858	// Run-time: ( -- )
//  1859	// Continue execution.
//  1860	static void _case(void) {
//  1861	  dStack_push(CASE_SYS);
//  1862	  dStack_push(0); // Count of of clauses
//  1863	}
//  1864	
//  1865	extern const char of_str[] = "of";
//  1866	// Contributed by Craig Lindley
//  1867	// Interpretation semantics for this word are undefined.
//  1868	// Compilation: ( C: -- of-sys )
//  1869	// Put of-sys onto the control flow stack. Append the run-time semantics given below to
//  1870	// the current definition. The semantics are incomplete until resolved by a consumer of
//  1871	// of-sys such as ENDOF.
//  1872	// Run-time: ( x1 x2 -- | x1 )
//  1873	// If the two values on the stack are not equal, discard the top value and continue execution
//  1874	// at the location specified by the consumer of of-sys, e.g., following the next ENDOF.
//  1875	// Otherwise, discard both values and continue execution in line.
//  1876	static void _of(void) {
//  1877	  dStack_push(dStack_pop() + 1);      // Increment count of of clauses
//  1878	  rStack_push(dStack_pop());         // Move to return stack
//  1879	
//  1880	  dStack_push(OF_SYS);
//  1881	  *pHere++ = OVER_IDX;  // Postpone over
//  1882	  *pHere++ = EQUAL_IDX; // Postpone =
//  1883	  *pHere++ = ZJUMP_IDX; // If
//  1884	  *pHere = 0;           // Filled in by endof
//  1885	  dStack_push((size_t) pHere++);// Push address of jump address onto control stack
//  1886	  dStack_push(rStack_pop());         // Bring of count back
//  1887	}
//  1888	
//  1889	extern const char endof_str[] = "endof";
//  1890	// Contributed by Craig Lindley
//  1891	// Interpretation semantics for this word are undefined.
//  1892	// Compilation: ( C: case-sys1 of-sys -- case-sys2 )
//  1893	// Mark the end of the OF ... ENDOF part of the CASE structure. The next location for a
//  1894	// transfer of control resolves the reference given by of-sys. Append the run-time semantics
//  1895	// given below to the current definition. Replace case-sys1 with case-sys2 on the
//  1896	// control-flow stack, to be resolved by ENDCASE.
//  1897	// Run-time: ( -- )
//  1898	// Continue execution at the location specified by the consumer of case-sys2.
//  1899	static void _endof(void) {
//  1900	  cell_t *back, *forward;
//  1901	
//  1902	  rStack_push(dStack_pop());         // Move of count to return stack
//  1903	
//  1904	  // Prepare jump to endcase
//  1905	  *pHere++ = JUMP_IDX;
//  1906	  *pHere = 0;
//  1907	  forward = pHere++;
//  1908	
//  1909	  back = (cell_t*) dStack_pop(); // Resolve If from of
//  1910	  *back = (size_t) pHere - (size_t) back;
//  1911	
//  1912	  if (dStack_pop() != OF_SYS) { // Make sure control structure is consistent
//  1913	    dStack_push(-22);
//  1914	    _throw();
//  1915	    return;
//  1916	  }
//  1917	  // Place forward jump address onto control stack
//  1918	  dStack_push((cell_t) forward);
//  1919	  dStack_push(rStack_pop());          // Bring of count back
//  1920	}
//  1921	
//  1922	extern const char endcase_str[] = "endcase";
//  1923	// Contributed by Craig Lindley
//  1924	// Interpretation semantics for this word are undefined.
//  1925	// Compilation: ( C: case-sys -- )
//  1926	// Mark the end of the CASE ... OF ... ENDOF ... ENDCASE structure. Use case-sys to resolve
//  1927	// the entire structure. Append the run-time semantics given below to the current definition.
//  1928	// Run-time: ( x -- )
//  1929	// Discard the case selector x and continue execution.
//  1930	static void _endcase(void) {
//  1931	  cell_t *orig;
//  1932	
//  1933	  // Resolve all of the jumps from of statements to here
//  1934	  int count = dStack_pop();
//  1935	  for (int i = 0; i < count; i++) {
//  1936	    orig = (cell_t *) dStack_pop();
//  1937	    *orig = (size_t) pHere - (size_t) orig;
//  1938	  }
//  1939	
//  1940	  *pHere++ = DROP_IDX;      // Postpone drop of case selector
//  1941	
//  1942	  if (dStack_pop() != CASE_SYS) {  // Make sure control structure is consistent
//  1943	    dStack_push(-22);
//  1944	    _throw();
//  1945	  }
//  1946	}
//  1947	
//  1948	#endif
//  1949	
//  1950	/*******************************************************************************/
//  1951	/**                            Double Cell Set                                **/
//  1952	/*******************************************************************************/
//  1953	#ifdef DOUBLE_SET
//  1954	#endif
//  1955	
//  1956	/*******************************************************************************/
//  1957	/**                             Exception Set                                 **/
//  1958	/*******************************************************************************/
//  1959	#ifdef EXCEPTION_SET
//  1960	extern const char throw_str[] = "throw";
//  1961	// ( k*x n -- k*x | i*x n)
//  1962	// if any bit of n are non-zero, pop the topmost exception frame from the
//  1963	// exception stack, along with everything on the return stack above that frame.
//  1964	// ...
//  1965	void _throw(void) {
//  1966	  errorCode = dStack_pop();
//  1967	  uint8_t index = 0;
//  1968	  int tableCode;
//  1969	  //_cr();
//  1970	  Serial.print(cTokenBuffer);
//  1971	  Serial.print(F(" EXCEPTION("));
//  1972	  do {
//  1973	    tableCode = pgm_read_dword(&(exception[index].code));
//  1974	    if (errorCode == tableCode) {
//  1975	      Serial.print((int)errorCode);
//  1976	      Serial.print("): ");
//  1977	      Serial.print(exception[index].name);
//  1978	      _cr();
//  1979	    }
//  1980	    index++;
//  1981	  } while (tableCode);
//  1982	//  dStack.tos = -1;                       // Clear the stack.
//  1983	  dStack_clear();                        // Clear the stack.
//  1984	  _quit();
//  1985	  state = FALSE;
//  1986	}  
//  1987	#endif
//  1988	
//  1989	/*******************************************************************************/
//  1990	/**                             Facility Set                                  **/
//  1991	/*******************************************************************************/
//  1992	#ifdef FACILITY_SET
//  1993	/*
//  1994	 * Contributed by Andrew Holt
//  1995	 */
//  1996	extern const char key_question_str[] = "key?";
//  1997	void _key_question(void) {
//  1998	    
//  1999	    if( Serial.available() > 0) {
//  2000	        dStack_push(TRUE);
//  2001	    } else {
//  2002	        dStack_push(FALSE);
//  2003	    }
//  2004	}
//  2005	#endif
//  2006	
//  2007	/*******************************************************************************/
//  2008	/**                              Local Set                                    **/
//  2009	/*******************************************************************************/
//  2010	#ifdef LOCAL_SET
//  2011	#endif
//  2012	
//  2013	/*******************************************************************************/
//  2014	/**                              Memory Set                                   **/
//  2015	/*******************************************************************************/
//  2016	#ifdef MEMORY_SET
//  2017	#endif
//  2018	
//  2019	/*******************************************************************************/
//  2020	/**                          Programming Tools Set                            **/
//  2021	/*******************************************************************************/
//  2022	#ifdef TOOLS_SET
//  2023	extern const char dot_s_str[] = ".s";
//  2024	void _dot_s(void) {
//  2025	  char i;
//  2026	//  char depth = dStack.tos + 1;
//  2027	  char depth = dStack_size();
//  2028	//  if (dStack.tos >= 0) {
//  2029	  if (depth > 0) {
//  2030	    for (i = 0; i < depth ; i++) {
//  2031	//      w = dStack.data[i];
//  2032	      w = dStack_peek(i);
//  2033	      displayValue();
//  2034	    }
//  2035	  }
//  2036	}
//  2037	
//  2038	extern const char dump_str[] = "dump";
//  2039	// ( addr u -- )
//  2040	// Display the contents of u consecutive address starting at addr. The format of
//  2041	// the display is implementation dependent.
//  2042	// DUMP may be implemented using pictured numeric output words. Consequently,
//  2043	// its use may corrupt the transient region identified by #>.
//  2044	void _dump(void) {
//  2045	  ucell_t len = (ucell_t)dStack_pop();
//  2046	  cell_t* addr_start = (cell_t*)dStack_pop();
//  2047	  cell_t* addr_end = addr_start;
//  2048	  addr_end += len;
//  2049	  addr_start = (cell_t*)(((size_t)addr_start >> 4) << 4);
//  2050	
//  2051	  volatile uint8_t* addr = (uint8_t*)addr_start;
//  2052	
//  2053	  while (addr < (uint8_t*)addr_end) {
//  2054	    Serial.print("\r\n$");
//  2055	    if (addr < (uint8_t*)0x10) Serial.print(zero_str);
//  2056	    if (addr < (uint8_t*)0x100) Serial.print(zero_str);
//  2057	    Serial.print((size_t)addr, HEX);
//  2058	    Serial.print(sp_str);
//  2059	    for (uint8_t i = 0; i < 16; i++) {
//  2060	      if (*addr < 0x10) Serial.print(zero_str);
//  2061	      Serial.print(*addr++, HEX);
//  2062	      Serial.print(sp_str);
//  2063	    }
//  2064	    Serial.print(tab_str);
//  2065	    addr -= 16;
//  2066	    for (uint8_t i = 0; i < 16; i++) {
//  2067	      if (*addr < 127 && *addr > 31) {
//  2068	        Serial.print((char)*addr);
//  2069	      } else {
//  2070	        Serial.print(".");
//  2071	      }
//  2072	      addr++;
//  2073	    }
//  2074	  }
//  2075	}
//  2076	
//  2077	extern const char see_str[] = "see";
//  2078	// ("<spaces>name" -- )
//  2079	// Display a human-readable representation of the named word's definition. The
//  2080	// source of the representation (object-code decompilation, source block, etc.)
//  2081	// and the particular form of the display in implementation defined.
//  2082	void _see(void) {
//  2083	  bool isLiteral, done;
//  2084	
//  2085	  _tick();
//  2086	  if (errorCode) return;
//  2087	  char flags = wordFlags;
//  2088	  if (flags && IMMEDIATE)
//  2089	    Serial.print("Immediate ");
//  2090	  cell_t xt = dStack_pop();
//  2091	  if (xt < 255) {
//  2092	    Serial.print("Primitive Word");
//  2093	  } else {
//  2094	    cell_t* addr = (cell_t*)xt;
//  2095	    Serial.print("\r\nCode Field Address: ");
//  2096	    Serial.print((size_t)addr, HEX);
//  2097	    Serial.print("\r\nAddr\tXT\tName");
//  2098	    do {
//  2099	      isLiteral = done = false;
//  2100	      Serial.print("\r\n$");
//  2101	      Serial.print((size_t)addr, HEX);
//  2102	      Serial.print(tab_str);
//  2103	      Serial.print(*addr, HEX);
//  2104	      Serial.print(tab_str);
//  2105	      xtToName(*addr);
//  2106	      switch (*addr) {
//  2107	        case 2:
//  2108	          isLiteral = true;
//  2109	        case 4:
//  2110	        case 5:
//  2111	          Serial.print("(");
//  2112	          Serial.print(*++addr);
//  2113	          Serial.print(")");
//  2114	          break;
//  2115	        case 13:
//  2116	        case 14:
//  2117	          Serial.print(sp_str);
//  2118	          char *ptr = (char*)++addr;
//  2119	          do {
//  2120	            Serial.print(*ptr++);
//  2121	          } while (*ptr != 0);
//  2122	          Serial.print("\x22");
//  2123	          addr = (cell_t *)ptr;
//  2124	          ALIGN_P(addr);
//  2125	          break;
//  2126	      }
//  2127	      // We're done if exit code but not a literal with value of one
//  2128	      done = ((*addr++ == 1) && (! isLiteral));
//  2129	    } while (! done);
//  2130	  }
//  2131	  Serial.println();
//  2132	}
//  2133	
//  2134	extern const char words_str[] = "words";
//  2135	void _words(void) { // --
//  2136	  uint8_t count = 0;
//  2137	  uint8_t index = 0;
//  2138	  uint8_t length = 0;
//  2139	  char* pChar;
//  2140	
//  2141	  while (flashDict[index].name) {
//  2142	    if (count > 70) {
//  2143	      Serial.println();
//  2144	      count = 0;
//  2145	    }
//  2146	    if (!(flashDict[index].flags & SMUDGE)) {
//  2147	      count += Serial.print(flashDict[index].name);
//  2148	      count += Serial.print(sp_str);
//  2149	    }
//  2150	    index++;
//  2151	  }
//  2152	
//  2153	  pUserEntry = pLastUserEntry;
//  2154	  while (pUserEntry) {
//  2155	    if (count > 70) {
//  2156	      Serial.println();
//  2157	      count = 0;
//  2158	    }
//  2159	    if (!(pUserEntry->flags & SMUDGE)) {
//  2160	      count += Serial.print(pUserEntry->name);
//  2161	      count += Serial.print(sp_str);
//  2162	    }
//  2163	    pUserEntry = (userEntry_t*)pUserEntry->prevEntry;
//  2164	  }
//  2165	  Serial.println();
//  2166	}
//  2167	
//  2168	#endif
//  2169	
//  2170	/*******************************************************************************/
//  2171	/**                               Search Set                                  **/
//  2172	/*******************************************************************************/
//  2173	#ifdef SEARCH_SET
//  2174	#endif
//  2175	
//  2176	/*******************************************************************************/
//  2177	/**                               String Set                                  **/
//  2178	/*******************************************************************************/
//  2179	#ifdef STRING_SET
//  2180	#endif
//  2181	
//  2182	/********************************************************************************/
//  2183	/**                         EEPROM Operations                                  **/
//  2184	/********************************************************************************/
//  2185	#ifdef EN_EEPROM_OPS
//  2186	extern const char eeRead_str[] = "eeRead";
//  2187	void _eeprom_read(void) {             // address -- value
//  2188	  dStack_push(EEPROM.read(dStack_pop()));
//  2189	}
//  2190	
//  2191	extern const char eeWrite_str[] = "eeWrite";
//  2192	void _eeprom_write(void) {             // value address --
//  2193	  char address;
//  2194	  char value;
//  2195	  address = (char) dStack_pop();
//  2196	  value = (char) dStack_pop();
//  2197	  EEPROM.write(address, value);
//  2198	}
//  2199	#endif
//  2200	
//  2201	/********************************************************************************/
//  2202	/**                      Arduino Library Operations                            **/
//  2203	/********************************************************************************/
//  2204	#ifdef EN_ARDUINO_OPS
//  2205	extern const char freeMem_str[] = "freeMem";
//  2206	void _freeMem(void) { 
//  2207	  dStack_push(freeMem());
//  2208	}
//  2209	
//  2210	extern const char delay_str[] = "delay";
//  2211	void _delay(void) {
//  2212	  delay(dStack_pop());
//  2213	}
//  2214	
//  2215	extern const char pinWrite_str[] = "pinWrite";
//  2216	// ( u1 u2 -- )
//  2217	// Write a high (1) or low (0) value to a digital pin
//  2218	// u1 is the pin and u2 is the value ( 1 or 0 ). To turn the LED attached to
//  2219	// pin 13 on type "13 1 pinwrite" p.s. First change its pinMode to output
//  2220	void _pinWrite(void) {
//  2221	  digitalWrite(dStack_pop(), dStack_pop());
//  2222	}
//  2223	
//  2224	extern const char pinMode_str[] = "pinMode";
//  2225	// ( u1 u2 -- )
//  2226	// Set the specified pin behavior to either an input (0) or output (1)
//  2227	// u1 is the pin and u2 is the mode ( 1 or 0 ). To control the LED attached to
//  2228	// pin 13 to an output type "13 1 pinmode"
//  2229	void _pinMode(void) {
//  2230	  pinMode(dStack_pop(), dStack_pop());
//  2231	}
//  2232	
//  2233	extern const char pinRead_str[] = "pinRead";
//  2234	void _pinRead(void) {
//  2235	  dStack_push(digitalRead(dStack_pop()));
//  2236	}
//  2237	
//  2238	extern const char analogRead_str[] = "analogRead";
//  2239	void _analogRead(void) {
//  2240	  dStack_push(analogRead(dStack_pop()));
//  2241	}
//  2242	
//  2243	extern const char analogWrite_str[] = "analogWrite";
//  2244	void _analogWrite(void) {
//  2245	  analogWrite(dStack_pop(), dStack_pop());
//  2246	}
//  2247	
//  2248	extern const char to_name_str[] = ">name";
//  2249	void _toName(void) {
//  2250	  xtToName(dStack_pop());
//  2251	}
//  2252	#endif
//  2253	
//  2254	/*********************************************************************************/
//  2255	/**                         Dictionary Initialization                           **/
//  2256	/*********************************************************************************/
//  2257	const flashEntry_t flashDict[] = {
//  2258	  /*****************************************************/
//  2259	  /* The initial entries must stay in this order so    */
//  2260	  /* they always have the same index. They get called  */
//  2261	  /* referenced when compiling code                    */
//  2262	  /*****************************************************/
//  2263	  { exit_str,           _exit,            NORMAL },
//  2264	  { literal_str,        _literal,         IMMEDIATE },
//  2265	  { type_str,           _type,            NORMAL },
//  2266	  { jump_str,           _jump,            SMUDGE },
//  2267	  { zjump_str,          _zjump,           SMUDGE },
//  2268	  { subroutine_str,     _subroutine,      SMUDGE },
//  2269	  { throw_str,          _throw,           NORMAL },
//  2270	  { do_sys_str,         _do_sys,          SMUDGE },
//  2271	  { loop_sys_str,       _loop_sys,        SMUDGE },
//  2272	  { leave_sys_str,      _leave_sys,       SMUDGE },
//  2273	  { plus_loop_sys_str,  _plus_loop_sys,   SMUDGE },
//  2274	  { evaluate_str,       _evaluate,        NORMAL },
//  2275	  { s_quote_str,        _s_quote,         IMMEDIATE + COMP_ONLY },
//  2276	  { dot_quote_str,      _dot_quote,       IMMEDIATE + COMP_ONLY },
//  2277	  { variable_str,       _variable,        NORMAL },
//  2278	  { over_str,           _over,            NORMAL }, // CAL
//  2279	  { eq_str,             _eq,              NORMAL }, // CAL
//  2280	  { drop_str,           _drop,            NORMAL }, // CAL
//  2281	
//  2282	  /*****************************************************/
//  2283	  /* Order does not matter after here                  */
//  2284	  /* Core Words                                        */
//  2285	  /*****************************************************/
//  2286	  { abort_str,          _abort,           NORMAL },
//  2287	  { store_str,          _store,           NORMAL },
//  2288	  { number_sign_str,    _number_sign,     NORMAL },
//  2289	  { number_sign_gt_str, _number_sign_gt,  NORMAL },
//  2290	  { number_sign_s_str,  _number_sign_s,   NORMAL },
//  2291	  { tick_str,           _tick,            NORMAL },
//  2292	  { paren_str,          _paren,           IMMEDIATE },
//  2293	  { star_str,           _star,            NORMAL },
//  2294	  { star_slash_str,     _star_slash,      NORMAL },
//  2295	  { star_slash_mod_str, _star_slash_mod,  NORMAL },
//  2296	  { plus_str,           _plus,            NORMAL },
//  2297	  { plus_store_str,     _plus_store,      NORMAL },
//  2298	  { plus_loop_str,      _plus_loop,       IMMEDIATE + COMP_ONLY },
//  2299	  { comma_str,          _comma,           NORMAL },
//  2300	  { minus_str,          _minus,           NORMAL },
//  2301	  { dot_str,            _dot,             NORMAL },
//  2302	  { slash_str,          _slash,           NORMAL },
//  2303	  { slash_mod_str,      _slash_mod,       NORMAL },
//  2304	  { zero_less_str,      _zero_less,       NORMAL },
//  2305	  { zero_equal_str,     _zero_equal,      NORMAL },
//  2306	  { one_plus_str,       _one_plus,        NORMAL },
//  2307	  { one_minus_str,      _one_minus,       NORMAL },
//  2308	  { two_store_str,      _two_store,       NORMAL },
//  2309	  { two_star_str,       _two_star,        NORMAL },
//  2310	  { two_slash_str,      _two_slash,       NORMAL },
//  2311	  { two_fetch_str,      _two_fetch,       NORMAL },
//  2312	  { two_drop_str,       _two_drop,        NORMAL },
//  2313	  { two_dup_str,        _two_dup,         NORMAL },
//  2314	  { two_over_str,       _two_over,        NORMAL },
//  2315	  { two_swap_str,       _two_swap,        NORMAL },
//  2316	  { colon_str,          _colon,           NORMAL },
//  2317	  { semicolon_str,      _semicolon,       IMMEDIATE },
//  2318	  { lt_str,             _lt,              NORMAL },
//  2319	  { lt_number_sign_str, _lt_number_sign,  NORMAL },
//  2320	  { eq_str,             _eq,              NORMAL },
//  2321	  { gt_str,             _gt,              NORMAL },
//  2322	  { to_body_str,        _to_body,         NORMAL },
//  2323	  { to_in_str,          _to_in,           NORMAL },
//  2324	  { to_number_str,      _to_number,       NORMAL },
//  2325	  { to_r_str,           _to_r,            NORMAL },
//  2326	  { question_dup_str,   _question_dup,    NORMAL },
//  2327	  { fetch_str,          _fetch,           NORMAL },
//  2328	  { abort_quote_str,    _abort_quote,     IMMEDIATE + COMP_ONLY },
//  2329	  { abs_str,            _abs,             NORMAL },
//  2330	  { accept_str,         _accept,          NORMAL },
//  2331	  { align_str,          _align,           NORMAL },
//  2332	  { aligned_str,        _aligned,         NORMAL },
//  2333	  { allot_str,          _allot,           NORMAL },
//  2334	  { and_str,            _and,             NORMAL },
//  2335	  { base_str,           _base,            NORMAL },
//  2336	  { begin_str,          _begin,           IMMEDIATE + COMP_ONLY },
//  2337	  { bl_str,             _bl,              NORMAL },
//  2338	  { c_store_str,        _c_store,         NORMAL },
//  2339	  { c_comma_str,        _c_comma,         NORMAL },
//  2340	  { c_fetch_str,        _c_fetch,         NORMAL },
//  2341	  { cell_plus_str,      _cell_plus,       NORMAL },
//  2342	  { cells_str,          _cells,           NORMAL },
//  2343	  { char_str,           _char,            NORMAL },
//  2344	  { char_plus_str,      _char_plus,       NORMAL },
//  2345	  { chars_str,          _chars,           NORMAL },
//  2346	  { constant_str,       _constant,        NORMAL },
//  2347	  { count_str,          _count,           NORMAL },
//  2348	  { cr_str,             _cr,              NORMAL },
//  2349	  { create_str,         _create,          NORMAL },
//  2350	  { decimal_str,        _decimal,         NORMAL },
//  2351	  { depth_str,          _depth,           NORMAL },
//  2352	  { do_str,             _do,              IMMEDIATE + COMP_ONLY },
//  2353	  { does_str,           _does,            IMMEDIATE + COMP_ONLY },
//  2354	  { drop_str,           _drop,            NORMAL },
//  2355	  { dupe_str,           _dupe,            NORMAL },
//  2356	  { else_str,           _else,            IMMEDIATE + COMP_ONLY },
//  2357	  { emit_str,           _emit,            NORMAL },
//  2358	  { environment_str,    _environment,     NORMAL },
//  2359	  { execute_str,        _execute,         NORMAL },
//  2360	  { fill_str,           _fill,            NORMAL },
//  2361	  { find_str,           _find,            NORMAL },
//  2362	  { fm_slash_mod_str,   _fm_slash_mod,    NORMAL },
//  2363	  { here_str,           _here,            NORMAL },
//  2364	  { hold_str,           _hold,            NORMAL },
//  2365	  { i_str,              _i,               NORMAL },
//  2366	  { if_str,             _if,              IMMEDIATE + COMP_ONLY },
//  2367	  { immediate_str,      _immediate,       NORMAL },
//  2368	  { invert_str,         _invert,          NORMAL },
//  2369	  { j_str,              _j,               NORMAL },
//  2370	  { key_str,            _key,             NORMAL },
//  2371	  { leave_str,          _leave,           IMMEDIATE + COMP_ONLY },
//  2372	  { loop_str,           _loop,            IMMEDIATE + COMP_ONLY },
//  2373	  { lshift_str,         _lshift,          NORMAL },
//  2374	  { m_star_str,         _m_star,          NORMAL },
//  2375	  { max_str,            _max,             NORMAL },
//  2376	  { min_str,            _min,             NORMAL },
//  2377	  { mod_str,            _mod,             NORMAL },
//  2378	  { move_str,           _move,            NORMAL },
//  2379	  { negate_str,         _negate,          NORMAL },
//  2380	  { or_str,             _or,              NORMAL },
//  2381	  { over_str,           _over,            NORMAL },
//  2382	  { postpone_str,       _postpone,        IMMEDIATE + COMP_ONLY },
//  2383	  { quit_str,           _quit,            NORMAL },
//  2384	  { r_from_str,         _r_from,          NORMAL },
//  2385	  { r_fetch_str,        _r_fetch,         NORMAL },
//  2386	  { recurse_str,        _recurse,         IMMEDIATE + COMP_ONLY },
//  2387	  { repeat_str,         _repeat,          IMMEDIATE + COMP_ONLY },
//  2388	  { rot_str,            _rot,             NORMAL },
//  2389	  { rshift_str,         _rshift,          NORMAL },
//  2390	  { s_to_d_str,         _s_to_d,          NORMAL },
//  2391	  { sign_str,           _sign,            NORMAL },
//  2392	  { sm_slash_rem_str,   _sm_slash_rem,    NORMAL },
//  2393	  { source_str,         _source,          NORMAL },
//  2394	  { space_str,          _space,           NORMAL },
//  2395	  { spaces_str,         _spaces,          NORMAL },
//  2396	  { state_str,          _state,           NORMAL },
//  2397	  { swap_str,           _swap,            NORMAL },
//  2398	  { then_str,           _then,            IMMEDIATE + COMP_ONLY },
//  2399	  { u_dot_str,          _u_dot,           NORMAL },
//  2400	  { u_lt_str,           _u_lt,            NORMAL },
//  2401	  { um_star_str,        _um_star,         NORMAL },
//  2402	  { um_slash_mod_str,   _um_slash_mod,    NORMAL },
//  2403	  { unloop_str,         _unloop,          NORMAL + COMP_ONLY },
//  2404	  { until_str,          _until,           IMMEDIATE + COMP_ONLY },
//  2405	  { while_str,          _while,           IMMEDIATE + COMP_ONLY },
//  2406	  { word_str,           _word,            NORMAL },
//  2407	  { xor_str,            _xor,             NORMAL },
//  2408	  { left_bracket_str,   _left_bracket,    IMMEDIATE },
//  2409	  { bracket_tick_str,   _bracket_tick,    IMMEDIATE },
//  2410	  { bracket_char_str,   _bracket_char,    IMMEDIATE },
//  2411	  { right_bracket_str,  _right_bracket,   NORMAL },
//  2412	
//  2413	#ifdef CORE_EXT_SET
//  2414	  { dot_paren_str,      _dot_paren,       IMMEDIATE },
//  2415	  { zero_not_equal_str, _zero_not_equal,  NORMAL },
//  2416	  { zero_greater_str,   _zero_greater,    NORMAL },
//  2417	  { two_to_r_str,       _two_to_r,        NORMAL },
//  2418	  { two_r_from_str,     _two_r_from,      NORMAL },
//  2419	  { two_r_fetch_str,    _two_r_fetch,     NORMAL },
//  2420	  { neq_str,            _neq,             NORMAL },
//  2421	  { hex_str,            _hex,             NORMAL },
//  2422	  { case_str,           _case,            IMMEDIATE + COMP_ONLY },    // CAL
//  2423	  { of_str,             _of,              IMMEDIATE + COMP_ONLY },    // CAL
//  2424	  { endof_str,          _endof,           IMMEDIATE + COMP_ONLY },    // CAL
//  2425	  { endcase_str,        _endcase,         IMMEDIATE + COMP_ONLY },    // CAL
//  2426	#endif
//  2427	
//  2428	#ifdef DOUBLE_SET
//  2429	#endif
//  2430	
//  2431	#ifdef EXCEPTION_SET
//  2432	#endif
//  2433	
//  2434	#ifdef FACILITY_SET
//  2435	  { key_question_str,   _key_question,    NORMAL },
//  2436	#endif
//  2437	
//  2438	#ifdef LOCALS_SET
//  2439	#endif
//  2440	
//  2441	#ifdef MEMORY_SET
//  2442	#endif
//  2443	
//  2444	#ifdef TOOLS_SET
//  2445	  { dot_s_str,          _dot_s,           NORMAL },
//  2446	  { dump_str,           _dump,            NORMAL },
//  2447	  { see_str,            _see,             NORMAL },
//  2448	  { words_str,          _words,           NORMAL },
//  2449	#endif
//  2450	
//  2451	#ifdef SEARCH_SET
//  2452	#endif
//  2453	
//  2454	#ifdef STRING_SET
//  2455	#endif
//  2456	
//  2457	#ifdef EN_ARDUINO_OPS
//  2458	  { freeMem_str,        _freeMem,         NORMAL },
//  2459	  { delay_str,          _delay,           NORMAL },
//  2460	  { pinWrite_str,       _pinWrite,        NORMAL },
//  2461	  { pinMode_str,        _pinMode,         NORMAL },
//  2462	  { pinRead_str,        _pinRead,         NORMAL },
//  2463	  { analogRead_str,     _analogRead,      NORMAL },
//  2464	  { analogWrite_str,    _analogWrite,     NORMAL },
//  2465	  { to_name_str,        _toName,          NORMAL },
//  2466	#endif
//  2467	
//  2468	#ifdef EN_EEPROM_OPS
//  2469	  { eeRead_str,         _eeprom_read,     NORMAL },
//  2470	  { eeWrite_str,        _eeprom_write,    NORMAL },
//  2471	#endif
//  2472	
//  2473	  { NULL,           NULL,    NORMAL }
//  2474	};
//  2475	
//  2476	
