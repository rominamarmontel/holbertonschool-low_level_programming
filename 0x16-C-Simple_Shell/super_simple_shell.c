#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
/**
 * main - function 
 * Return: 0
 */
 int main(void)
 {
    char *argv[] = {" "}, *line = NULL, *delim;
    pid_t id;/*parent id*/
    int i;
	size_t len = 0;
	ssize_t lineSize = 0;

    while (1)
    {
        id = fork();/*create process*/
        if (id != 0)/*if parent is NULL*/
        {
            wait(NULL);
        }
        else
        {
            printf("#cisfun$ ");
            lineSize = getline(&line, &len, stdin);
            if (lineSize == -1)
            {
                free(line);
                return (0);
            }
            line[lineSize - 1] = '\0';
            delim = strtok(line, " ");
            for (i = 0; delim != NULL; i++)
            {
                argv[i] = delim;
                delim = strtok(NULL, " ");
            }
            if (id == 0)
            {
            id = getpid();
            printf("%d\n", id);
            return (0);
            }
            argv[i] = NULL;
            if (execve(argv[0], argv, NULL) == -1)/*if no array, argument*/
                perror("Error\n");
        }
    }
    free(line);
    return (0);
 }

