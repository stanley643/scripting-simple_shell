#include "shell.h"

/**
 * main - the shell playground
 * Return: 0 on success
 *
 */
int main(int argc, char **argv, char **envp)
{
pid_t pid;

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
