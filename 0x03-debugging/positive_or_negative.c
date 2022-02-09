#include "main.h"
/**
 * main - check the code.
 * Return: return
 */

void positive_or_negative(int n)
{
        n = 0;
        if (n == 0)
                printf("%d is zero\n", n);
        else if (n > 0)
                printf("%d is positive\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return;
}
