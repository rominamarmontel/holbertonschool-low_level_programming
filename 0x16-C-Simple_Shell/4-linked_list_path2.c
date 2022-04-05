#include "main.h"
/**
 * print_listint - function for printing PATH of linked list
 */
void listpath(listpath_t **head)
{
    listpath_t *listpath = NULL;
    listpath_t *temp;
    char *str = getenv("PATH");
    char *token = strtok(str, ":");

    listpath = malloc(sizeof(listpath_t));
    if (listpath == NULL)
        return;
    
    while (token != NULL)
    {
        listpath->str = token;
        listpath->next = NULL;
    
    if (*head == NULL)
        *head = listpath;
    else
    {
        temp = *head;
        while (temp->next != NULL)
        temp = temp->next;
        temp->next = listpath;
    }
    token = strtok(NULL, ":");
    printf("%s\n", listpath->str);
    }
    free(listpath);
}
int main(void)
{
    struct listpath_t *head = NULL;
    listpath(head);
    return (0);
}
