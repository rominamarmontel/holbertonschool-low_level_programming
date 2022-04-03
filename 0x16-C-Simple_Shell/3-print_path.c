#include "main.h"
/**
 * main - function
 * Return: 0
 * Write a function that prints each directory contained 
 * in the the environment variable PATH, one directory per line.
 */ 
int main(void) 
{
    char *str = getenv("PATH");
    char delim[] = ":";
    char *token;

    *str = *getenv("PATH");
    token = strtok(str, delim);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return (0);
}
