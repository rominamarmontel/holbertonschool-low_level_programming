#include "main.h"
/**
 * main - looks for files in the current PATH
 * Return: 0
 */
int main(void) {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    
    if (d) {
        while ((dir = readdir(d)) != NULL) 
        {
            printf("%s\n", dir->d_name);
        }
    closedir(d);
    }
    return(0);