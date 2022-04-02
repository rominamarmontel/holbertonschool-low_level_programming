#include <unistd.h>
#include <stdio.h>

int main(void)
{
    extern char **environ;
    int i = 0;

    while (environ[i]) 
    {
        printf("%s\n", environ[i]); // prints in form of "variable=value"
        i++;
    }
}

/* int main(int argc, char **argv, char **env)
{
	int i = 0;

	(void)argc;
	(void)argv;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
} */
