#include "shell.h"
/**
 * stpr-putchar - writes the character c to stdout
 * @c: Ther character to print
 * Return: On success 1 and on error -1
 */
int stpr-putchar(char c)
{
	if (c == '\n')
	{
		char newline = '\n';

		return (write(1, &newline, 1));
	}
	else
		return (write(1, &c, 1));
}

/**
 * stpr-print_string - function that calls the _putchar
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @string: characters passed
 * Return: 1 on success and -1 on error
 */
void stpr-print_string(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		stpr-putchar(string[i]);
		i++;
	}
}