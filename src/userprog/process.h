#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);
void argument_stack (char **parse, int count, void **esp);
struct thread *get_child_process (int pid);
int process_add_file (struct file *f);
void process_close_file (int fd);
struct file *process_get_file(int fd);
#endif /* userprog/process.h */
