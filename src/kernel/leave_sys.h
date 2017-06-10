// Fri Jun  9 02:32:35 UTC 2017
// 4735-a0f

#ifndef KERN_LEAVE_SYS
#define KERN_LEAVE_SYS

extern const char leave_sys_str[]; // = "leave-sys";
extern void _leave_sys(void);
extern void dStack_push(cell_t value);
extern cell_t rStack_pop(void);
extern cell_t* ip;
extern void _throw(void);

#endif
