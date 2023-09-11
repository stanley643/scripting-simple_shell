#include "shell.h"
/**
 *_putchar - writes the character c to stdout
 * @c: Ther character to print
 * Return: On success 1 and on error -1
 */
int _putchar(char c)
{
	if (c == '\n')
	{
		char newline = '\n';

		return (write(1, &newline, 1));
	}
	else
		retrurn (write(1, &c, 1));
}

/**
 * print_string - function that calls the _putchar
 * _putchar
