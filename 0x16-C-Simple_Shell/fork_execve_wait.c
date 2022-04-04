#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
/**
 * main - function fork, execve, wait
 * Return: 0
 * Write a program that executes the command ls -l /tmp 
 * in 5 different child processes
 */
int main(void)
{/*execute the command*/
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    pid_t pid;/*child id*/
    int i;

    for (i = 0; i < 5; i++)
    {
        pid = fork();/*create process*/
        if (pid != 0)/*if child is NULL*/
        {/*Wait for a father to exit before creating a new child*/
            wait(NULL);
        }
        else
        {
            execve(argv[0], argv, NULL);/*if no array, no argument*/
            exit(0);
        }
    }
    return (0);
}
