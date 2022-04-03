#include <stdio.h>
#include <unistd.h>

/**
 * main - fet a child ID
 *
 * Return: Always 0.
 */
int main(void)
{
	int ppid;

    ppid = getppid();
    printf("%d\n", ppid);
    return (0);
}
