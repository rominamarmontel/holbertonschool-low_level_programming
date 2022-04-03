#include "main.h"
/**
 * getenv - environment variable functions
 * Return: 0
 */
char *_getenv(const char *name)
{
    extern char **environ;
	int i;

	for (i = 0; environ[i]; i++)
	{
        printf("%s\n", environ[i]);
	}
	return (0);
}

