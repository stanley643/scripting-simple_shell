#include "main.h"

/**
 * main - the shell playground
 * Return: 0 on success or something else
 */
/*Look at argv[5]*/
int main(void)
{
    char *line = NULL;
    /**int result;*/
    ssize_t nread;
    size_t len = 0;
    pid_t pid;
    char *args[MAX_ARGS];
    char *executable_path;
    char *path[MAX_ARGS];
    char *path_var;
    int i;

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
        _print_str("");
        nread = getline(&line, &len, stdin);
        if (nread == -1)
            break;

        remove_newline(line);

        tokenize_args(args, line);
        if (args[0] == NULL)
            continue;

        executable_path = find_the_path(args[0], path);
        if (executable_path != NULL)
        {
            pid = fork();

            if (pid < 0)
            {
                perror("Process execution failed");
                continue;
            }

            else if (pid == 0)
            {
                execve(executable_path, args, NULL);
                perror("./shell");
                _exit(EXIT_FAILURE);
            }
            wait(NULL);
        }
        /*else
        {
            
        }*/
    }

    free(line);
    return (0);
}
