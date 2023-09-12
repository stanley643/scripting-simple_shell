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


/**
 * stpr-remove_newline - removes ther new line 
 * from the buffer when executing
 * @str: char
 * Return: nothing atall
 */
void stpr-remove_newline(char *str)
{
	int len;

	len = strlen(str);

	if (len > 0 && str[len - 1] == '\n')
		str[len - 1] = '\0';
}

/**
 * stpr-create_buf - creating a buffer object
 * @filename: name of the file
 * @buf: parameter
 * Return: code 99
 */
char *stpr-create_buf(char *buf)
{
	buf = malloc(sizeof(char) * BUFSIZE);
	if (buf == NULL)
	{
		perror("Error creating buffer!");
		exit(EXIT_FAILURE);
	}

	return (buf);
}

/**
 * stpr-tokenize - parsing of command line args
 * by using a delimetor
 * @args_array: array of arguments
 * @str: string to be tokenized
 * i: indexing variable
 *
 */
void stpr-tokenize(char **args_array, char *str)
{
	char *token, *delim;
	int i;

	i = 0;

	delim = " \t\n";
	token = strtok(str, delim);

	while (token && i < MAX_ARGS - 1)
	{
		args_array[i++] = token;
		token = strtok(NULL, delim);
	}
	args_array[i] = NULL;
}
