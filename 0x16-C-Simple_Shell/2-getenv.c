#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
"/Users/romi/holbertonschool-low_level_programming/holbertonschool-low_level_programming/0x16-C-Simple_Shell/main.h"

/**
 * getenv - environment variable functions
 * Return: 0
 */
char *_getenv(const char *name)
{
    extern char **environ;
	char *temp;
	char *compare = NULL;
	int i;

	for (i = 0; environ[i]; i++)
	{
		temp = strdup(environ[i]);
		compare = strtok(temp, "=");
		if (strcmp(compare, name) == 0)
		{
			return (strtok(NULL, "\n"));
		}
	}
	return (0);
}

