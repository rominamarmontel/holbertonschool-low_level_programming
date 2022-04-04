#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"
#include <sys/wait.h>

enum {MAXLINE = 256, MAXARGS = 48};

int main(int argc, char *argv[]) {
    char buf[MAXLINE];
    char *args[MAXARGS];
    pid_t pid;
    int status, args_num = 0;

    char *str1, *token;

    printf("%% ");
    while (fgets(buf, MAXLINE, stdin) != NULL) 
    {
        if (buf[strlen(buf) - 1] == '\n')
            buf[strlen(buf) - 1] = 0;

        str1 = strdup(buf);
        for (int j = 0; ; j++, str1 = NULL) {
            token = strtok(str1, " ");
            if (token == NULL)
                break;
            args[j] = token;
            args_num += 1;
            printf("%d: %s\n", j + 1, args[j]);
        }
        free(str1);
        args[args_num] = (char *) NULL;

        if ((pid = fork()) < 0) {
            perror("fork");
        } else if (pid == 0) {
            execvp(args[0], &args[0]);
            printf("couldn't execute: %s", buf);
            exit(127);
        }

        if (waitpid(pid, &status, 0) < 0)
            perror("waitpid");
        printf("%% ");
    }

    exit(EXIT_SUCCESS);
}