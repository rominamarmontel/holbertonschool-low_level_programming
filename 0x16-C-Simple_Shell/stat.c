#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include <errno.h>
/**
 * stat - display file status
 * Return: 0
 */
int main(void)
{
    struct dirent *de;  // Pointer for directory entry
    // opendir() returns a pointer of DIR type. 
    DIR *dr = opendir(".");
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }
    // for readdir()
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", &de);
  
    closedir(dr);    
    return 0;
}