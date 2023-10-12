SIMPLE SHELL PROJECT.

An ALX group project carried out by
1. Stanley Murigi Njoroge: nmurigi@kabarak.ac.ke


##INTRODUCTION

This is a group project that integrates all the concepts which have been studied so far in the program in order to
build a shell program which takes input from the user and delivers it to the Operating system for execution.
Shell programs are commonly used in Unix-based operating systems, but can also be used in other systems.
In the 1960s, Ken Thompson and Dennis Ritchie developed the first Unix OS which has undergone refinement
and development over the years and has given rise to the development of other Unix-like operating systems.

The first shell program called the Thompson shell or sh was developed by Ken Thompson in 1971.
It was a basic shell and did not handle scripting but the feat was a precursor to the development of better and
improved shells such as the Bash which is in wide use today.

A shell can  either be interactive or non-interactive. An interactive shell allows arguments to be
entered at the prompt and then executed. The Interactive shell mode is invoked using the -i flag.
A non-interactive shell on the other hand does not allow user interaction.
It is used to execute shell scripts or to run commands in the background.
Non-interactive shells do not display a prompt or read commands from standard input.

#SIMPLE SHELL PROJECT:
This Project involves the Creation of  a simple shell program that works with
the command line interface (CLI) and allows the users of the shell program to enter commands.
It has the properties of both an interactive and non-interactive shell. This shell program has the capability to
handle the executables found in the environmental variable PATH, with or without their full paths.
Some examples of which include ```ls``` (```/bin/ls```), ```pwd```, ```echo```,```mv```, ```cp```.

### Operational Environment:
* Language: C
* OS: Ubuntu 22.04.2 LTS
* Compiler: gcc  11.3.0
* Guidelines and Checks: all checks must meet and comply with the standards set by [Betty](https://github.com/holbertonschool/Betty/wiki)


### Project Tasks:

###Task 0. Betty would be proud:
Write a beautiful code that passes the Betty checks

###Task 1: Simple shell 0.1
Write a UNIX command line interpreter.

Usage: simple_shell
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it

###Task 2. Simple shell 0.2
Simple shell 0.1 +
Handle command lines with arguments

###Task 3. Simple shell 0.3
Simple shell 0.2 +
Handle the PATH
fork must not be called if the command doesn’t exist

###Task 4. Simple shell 0.4
Simple shell 0.3 +
Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit

###Task 5. Simple shell 1.0
Simple shell 0.4 +
Implement the env built-in, that prints the current environment

###Task 6. Simple shell 0.1.1
Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:

be able to move the cursor

###Task 7. Simple shell 0.2.1
Simple shell 0.2 +
You are not allowed to use strtok

###Task 8. Simple shell 0.4.1
Simple shell 0.4 +
handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell

###Task 9. setenv, unsetenv
Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

setenv
Initialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE
Should print something on stderr on failure

unsetenv
Remove an environment variable
Command syntax: unsetenv VARIABLE
Should print something on stderr on failure

###Task 10. cd
Simple shell 1.0 +

Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME
You have to handle the command cd -
You have to update the environment variable PWD when you change directory
man chdir, man getcwd

###Task 11. ;
Simple shell 1.0 +

Handle the commands separator ;

###Task 12. && and ||
Simple shell 1.0 +

Handle the && and || shell logical operators

###Task 13. alias
Simple shell 1.0 +

Implement the alias builtin command
Usage: alias [name[='value'] ...]
alias: Prints a list of all aliases, one per line, in the form name='value'
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value

###Task 14. Variables
Simple shell 1.0 +

Handle variables replacement
Handle the $? variable
Handle the $$ variable

### Task 15. Comments
Simple shell 1.0 +

Handle comments (#)

###Task 16. File as input
Simple shell 1.0 +

Usage: simple_shell [filename]
Your shell can take a file as a command line argument
The file contains all the commands that your shell should run before exiting
The file should contain one command per line
In this mode, the shell should not print a prompt and should not read from stdin

