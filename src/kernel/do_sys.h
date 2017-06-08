// Wed Jun  7 21:40:26 UTC 2017
// 4735-a0e

#ifndef KERN_DO_SYS
#define KERN_DO_SYS
extern const char do_sys_str[]; // = "do-sys";
extern void _do_sys(void);
extern void rStack_push(cell_t value);
extern cell_t dStack_pop(void);

#endif
