#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"
#include <sys/wait.h>

enum {MAXLINE = 256, MAXARGS = 48};

int main(int argc, char *argv[]) {
    char buf[MAXLINE];
    pid_t pid;
    int status;

    char *str1, *token;

    printf("%% ");
    while (fgets(buf, MAXLINE, stdin) != NULL) {
        if (buf[strlen(buf) - 1] == '\n')
            buf[strlen(buf) - 1] = 0;

        if ((pid = fork()) < 0) {
            perror("fork");
        } else if (pid == 0) {
            execlp(buf, buf, (char *) NULL);
            printf("couldn’t execute: %s", buf);
            exit(127);
        }

        if (waitpid(pid, &status, 0) < 0)
            perror("waitpid");
        printf("%% ");
    }

    exit(EXIT_SUCCESS);
}