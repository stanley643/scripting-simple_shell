#include "stprshell.h"

/**
 * main - the shell playground
 * Return: 0 on success
 *
 */
int main(int argc, char **argv, char **envp)
{
pid_t pid;
char *line = NULL;
ssize_t nread;
size_t len = 0;
char *args[MAX_ARGS];
char *executable_path, *env;
char *path[MAX_ARGS];
char *path_var, *exit_command;
int i;


(void)argc;
(void)argv;
exit_command = "exit";
env = "env";
path_var = getenv("PATH");

if (path_var == NULL)
{
	perror("./hsh");
	return (EXIT_FAILURE);
}

i = 0;
path[i++] = strtok(path_var, ":");
while ((path[i] = strtok(NULL, ":")) != NULL)
{
	i++;
}

while (1)
{
	pid = fork();

	if (pid < 0)
	{
		perror("Process executrion failed");
		continue;
	}
	else if (pid == 0)
	{
	//	execve();
		perror("./shell");
		_exit(EXIT_FAILURE);
	}
	wait(NULL);
}
return (0);
}
