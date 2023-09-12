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

int stpr-putchar(char c);
void stpr-print_string(char *string);

#endif
