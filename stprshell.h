#ifndef STPRSHELL_H
#define STPRSHELL_H


#include<stdbool.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>

#define BUFSIZE 1024
#define MAX_ARGS 11

int stpr_putchar(char c);
void stpr_print_string(char *string);
void stpr_tokenize(char **args_array, char *str);
void stpr_remove_newline(char *str);
char *stpr_find_path(char *command, char *path[]);
char *stpr_create_buf(char *buf);
#endif
