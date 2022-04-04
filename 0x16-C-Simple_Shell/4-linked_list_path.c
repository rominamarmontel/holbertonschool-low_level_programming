#include "main.h"
/**
 * print_listint - function for printing PATH of linked list
 */

int main(void)
{
	list_t *str = getenv("PATH");
    int i;
    size_t h;

    *str = *getenv("PATH");
	for (i = 0; h != NULL; i++)
	{
		printf("%s\n", h->str);
		h = h->next;
	}
	return (i);
}