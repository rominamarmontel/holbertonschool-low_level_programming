#include <stdio.h>
#include <unistd.h>
/**
 * execve - execute a file
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <unistd.h>

int main()
{
	char *argv[] = {"/bin/ls", "-lha", NULL};

	if (execve(argv[0], argv, NULL) == -1)
		perror("Error:");
}
