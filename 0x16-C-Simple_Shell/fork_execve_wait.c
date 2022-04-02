#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{/*execute the command*/
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    pid_t id;/*parent id*/
    int i;

    for (i = 0; i < 5; i++)
    {
        id = fork();/*create process*/
        if (id != 0)/*if parent is NULL*/
        {
            wait(NULL);
        }
        else
        {
            printf("I am a %d and my father is %d\n", id, getppid());
            if (execve(argv[0], argv, NULL) == -1)/*if no array, argument*/
            {
                perror("Error\n");
            }

        }
    }
    return (0);
}
