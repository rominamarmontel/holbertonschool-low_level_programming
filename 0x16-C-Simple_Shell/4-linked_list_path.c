#include "main.h"
/**
 * print_listint - function for printing PATH of linked list
 */

int main(void)
{
	char *str = getenv("PATH");
	char *delim = ":";
	char *token;
	listpath_t *listpath = NULL;/*path node*/

	token = strtok(str, delim);
	while (token != NULL)
	{
		add_node_end(&listpath, token);	/*listpath ni tokenshita node wo tsuika*/
		token = strtok(NULL, delim);/*tsugi no token wo dainyu*/
	}
	while(listpath != NULL)/*linked list ga areba*/
	{
		printf("%s\n", listpath->str);/*list no str wo print*/
		listpath = listpath->next;/*tsugi no str ni susumu*/
	}
  	return (0);
}