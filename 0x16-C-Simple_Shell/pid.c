#include <stdio.h>
#include <unistd.h>

/**
 * main - get a Parent ID
 *
 * Return: Always 0.
 */
int main(void)
{
    int p_id;

    p_id = getpid(); /*Parent process id*/

    printf("%d\n", p_id);

    return 0;
}
