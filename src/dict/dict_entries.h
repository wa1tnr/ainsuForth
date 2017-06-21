// Tue Jun 20 21:33:06 UTC 2017
// 4735-a0p-02-

extern const char abs_str[]; // = "abs";
extern void _abs(void);

extern const char zero_equal_str[]; // = "0=";
extern void _zero_equal(void);

extern const char and_str[]; // = "and";
extern void _and(void);

extern const char count_str[]; // = "count";
extern void _count(void);

extern const char word_str[]; // = "word";
extern void _word(void);

extern const char xor_str[]; // = "xor";
extern void _xor(void);

// extern cell_t dStack_pop(void);
// extern const flashEntry_t* pFlashEntry; // = flashDict;
// extern cell_t* pHere;

extern const char exit_str[]; // = "exit";
extern void _exit(void);

extern const char literal_str[]; // = "literal";
extern void _literal(void);

extern const char type_str[]; // = "type"; 
extern void _type(void);

extern const char jump_str[]; // = "jump";
extern void _jump(void);

extern const char zjump_str[]; // = "zjump";
extern void _zjump(void);

extern const char subroutine_str[]; // = "subroutine";
extern void _subroutine(void);

extern const char throw_str[]; // = "throw";
extern void _throw(void);

extern const char do_sys_str[]; // = "do-sys";
extern void _do_sys(void);

extern const char loop_sys_str[]; // = "loop-sys";
extern void _loop_sys(void);

extern const char leave_sys_str[]; // = "leave-sys";
extern void _leave_sys(void);
 
extern const char evaluate_str[]; // = "evaluate";
extern void _evaluate(void);

extern const char s_quote_str[]; // = "s\x22"; 
extern void _s_quote(void);

extern const char dot_quote_str[]; // = ".\x22";
extern void _dot_quote(void);

extern const char variable_str[]; // = "variable";
extern void _variable(void);

extern const char over_str[]; // = "over";
extern void _over(void);

extern const char eq_str[]; // = "=";
extern void _eq(void);

extern const char drop_str[]; // = "drop"; // ( x -- ) // Remove x from stack
extern void _drop(void);

extern const char warm_str[]; // = "warm";
extern void _warm(void);

extern const char clr_bit_str[]; // = "clr"; // local idiom yainsu
extern void _clr_bit(void);

extern const char set_bit_str[]; // = "setb"; // local idiom yainsu
extern void _set_bit(void);

extern const char cls_str[]; // = "cls"; // local idiom yainsu
extern void _cls(void);

extern const char logo_str[]; // = "logo";
extern void _logo(void);

extern const char clear_str[]; // = "clear"; // local idiom yainsu
extern void _clear(void);

extern const char abort_str[]; // = "abort";
extern void _abort(void);

extern const char store_str[]; // = "!";
extern void _store(void);

extern const char tick_str[]; // = "'";
extern void _tick(void);

extern const char paren_str[]; // = "(";

extern void _paren(void);

extern const char star_str[]; // = "*";
extern void _star(void);

extern const char plus_str[]; // = "+";
extern void _plus(void);

#ifdef DEFINED_COMMA
// extern const char comma_str[]; // = ",";
#endif

extern const char minus_str[]; // = "-";
extern void _minus(void);

extern const char dot_str[]; // = ".";
extern void _dot(void);

extern const char slash_str[]; // = "/";
extern void _slash(void);

extern const char slash_mod_str[]; // = "/mod";
extern void _slash_mod(void);

#ifdef DEFINED_TWO_DROP
// extern const char two_drop_str[]; // = "2drop"; // ( x1 x2 -- )
#endif

extern const char two_dup_str[]; // = "2dup";
extern void _two_dup(void);

extern const char two_over_str[]; // = "2over";
extern void _two_over(void);

extern const char two_swap_str[]; // = "2swap";
extern void _two_swap(void);

extern const char colon_str[]; // = ":";
extern void _colon(void);

extern const char semicolon_str[]; // = ";";
extern void _semicolon(void);

extern const char lt_str[]; // = "<";
extern void _lt(void);

extern const char gt_str[]; // = ">";
extern void _gt(void);

extern const char fetch_str[]; // = "@";
extern void _fetch(void);

extern const char bl_str[]; // = "bl";
extern void _bl(void);

extern const char base_str[]; // = "base";
extern void _base(void);

extern const char c_store_str[]; // = "c!";
extern void _c_store(void);

extern const char c_comma_str[]; // = "c,";
extern void _c_comma(void);

extern const char c_fetch_str[]; // = "c@";
extern void _c_fetch(void);

extern const char char_str[]; // = "char";
extern void _char(void);

extern const char constant_str[]; // = "constant";
extern void _constant(void);

extern const char cr_str[]; // = "cr";
extern void _cr(void);

extern const char begin_str[]; // = "begin";
extern void _begin(void);

extern const char create_str[]; // = "create";
extern void _create(void);

extern const char decimal_str[]; // = "decimal";
extern void _decimal(void);

extern const char emit_str[]; // = "emit";
extern void _emit(void);

extern const char execute_str[]; // = "execute";
extern void _execute(void);

extern const char dupe_str[]; // = "dup";
extern void _dupe(void);

extern const char here_str[]; // = "here";
extern void _here(void);

extern const char if_str[]; // = "if";
extern void _if(void);

extern const char immediate_str[]; // = "immediate";
extern void _immediate(void);

extern const char invert_str[]; // = "invert";
extern void _invert(void);

extern const char key_str[]; // = "key"; // ( -- char )
extern void _key(void);

extern const char loop_str[]; // = "loop";
extern void _loop(void);

extern const char negate_str[]; // = "negate";
extern void _negate(void);

extern const char or_str[]; // = "or";
extern void _or(void);

extern const char quit_str[]; // = "quit";
extern void _quit(void);

extern const char r_from_str[]; // = "r>";
extern void _r_from(void);

extern const char r_fetch_str[]; // = "r@";
extern void _r_fetch(void);

extern const char rot_str[]; // = "rot";
extern void _rot(void);

extern const char rshift_str[]; // = "rshift"; // ( x1 u -- x2 ) // x2 is x1 shifted to right by u positions.
extern void _rshift(void);

extern const char sign_str[]; // = "sign"; // ( n -- )
extern void _sign(void);

extern const char source_str[]; //  = "source";
extern void _source(void);

extern const char space_str[]; // = "space"; // ( -- ) // Display one space
extern void _space(void);

extern const char spaces_str[]; // = "spaces"; // ( n -- ) // if n is greater than zero, display n space
extern void _spaces(void);

extern const char swap_str[]; // = "swap";
extern void _swap(void);

extern const char then_str[]; // = "then"; // Interpretation: Undefine // Compilation: (C: orig -- ) // Run-Time: ( -- )
extern void _then(void);

extern const char u_dot_str[]; // = "u."; // ( u -- ) // Displau u in free field format // tested and fixed by Alex Moskovskij
extern void _u_dot(void);

extern const char unloop_str[]; // = "unloop"; // Interpretation: Undefine // Execution: ( -- )(R: loop-sys -- )
extern void _unloop(void);

extern const char dot_paren_str[]; // = ".("; // ( "ccc<paren>" -- )
extern void _dot_paren(void);

extern const char until_str[]; // = "until"; // Interpretation: Undefine // Compilation: (C: dest -- ) // Run-Time: ( x -- )
extern void _until(void);

extern const char hex_str[]; // = "hex"; // ( -- ) // Set BASE to 16
extern void _hex(void);

extern const char key_question_str[]; // = "key?";
extern void _key_question(void);

extern const char dot_s_str[]; // = ".s";
extern void _dot_s(void);

extern const char dump_str[]; // = "dump"; // ( addr u -- )
extern void _dump(void);

extern const char see_str[]; // = "see"; // ("<spaces>name" -- )
extern void _see(void);

extern const char words_str[]; // = "words";
extern void _words(void);

extern const char delay_str[]; // = "delay";
extern void _delay(void);

extern const char delay_us_str[]; // = "usDelay";
extern void _us_delay(void);

extern const char pinWrite_str[]; // = "pinWrite";
extern void _pinWrite(void);

extern const char pinMode_str[]; // = "pinMode"; // ( u1 u2 -- )
extern void _pinMode(void);

extern const char plus_loop_sys_str[]; // = "plus_loop-sys";
extern void _plus_loop_sys(void);

