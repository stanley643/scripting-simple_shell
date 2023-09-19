#include "stprshell.h"
/**
 * stpr_find_path - a pointer trys to access the given path using X_OK
 * @command: user input
 * @path: the array of pointers to the desired exec file
 * Return: NULL on success
 */
char *stpr_find_path(char *command, char *path[])
{
	char exec_path[BUFSIZE];
	int i;

	if (access(command, X_OK) == 0)
		return (command);

	for (i = 0; path[i] != NULL; i++)
	{
		snprintf(exec_path, sizeof(exec_path), "%s%s", path[i], command);
		if (access(exec_path, X_OK) == 0)
			return (strdup(exec_path));
	}
	return (NULL);
}
/**
 * stpr_initialize_path - initializes the path
 * @path_var: path variable
 * @path: the path
 * Return: nothing
 */
void stpr_initialize_path(char *path_var, char **path)
{
	size_t i = 0;

	path[i++] = strtok(path_var, ":");
	while ((path[i] = strtok(NULL, ":")) != NULL)
		i++;
}
