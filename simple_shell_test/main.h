#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <string.h>
#include <dirent.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;
int access(const char *pathname, int mode);
int chdir(const char *path);
int close(int fd);
int closedir(DIR *dirp);
int execve(const char *pathname, char *const argv[],
char *const envp[]);
void exit(int status);
void _exit(int status);
int fflush(FILE *stream);  
pid_t fork(void); 
void *malloc(size_t size);
void free(void *ptr);
char *getcwd(char *buf, size_t size);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
pid_t getpid(void);
pid_t getppid(void); 
int isatty(int fd);
int kill(pid_t pid, int sig);
int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
DIR *opendir(const char *name);
void perror(const char *s);
ssize_t read(int fd, void *buf, size_t count);
struct dirent *readdir(DIR *dirp);
int stat(const char *pathname, struct stat *buf);
int lstat(const char *pathname, struct stat *buf);
int fstat(int fd, struct stat *buf);
char *strtok(char *str, const char *delim);
pid_t wait(int *wstatus);
pid_t waitpid(pid_t pid, int *wstatus, int options);
int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options);
pid_t wait3(int *wstatus, int options, struct rusage *rusage);
pid_t wait4(pid_t pid, int *wstatus, int options, struct rusage *rusage);
ssize_t write(int fd, const void *buf, size_t count);  
#endif
