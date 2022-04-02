#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char *token;
	char *parse = NULL;
	list_t *head;

	head = NULL;
	parse = _getenv("PATH");
	token = strtok(parse, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		add_node_end(&head, token);
		token = strtok(NULL, ":");
	}
	return (0);
}
