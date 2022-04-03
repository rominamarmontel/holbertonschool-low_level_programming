#include "main.h"
/**
 * main - function env and environ
 * Return: 0
 */

int main(int argc, char *argv[], char *envp[])
{
    extern char **environ;
	(void)argc;

	printf("address of env = %p\n", (void *)envp);
	printf("address of environ = %p\n", (void *)environ);
    return (0);
}
/*This argument can then be treated in the same way as environ, 
with the difference that its scope is local to main(). 
Although this feature is widely implemented on UNIX systems, 
its use should be avoided since, in addition to the scope limitation, 
it is not specified in SUSv3.*/

