#ifndef SHELL_H
#define SHELL_H


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

int _putchar(char c);
void print_string(char *string);

#endif
