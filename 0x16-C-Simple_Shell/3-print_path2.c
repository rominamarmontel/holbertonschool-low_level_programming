#include "main.h"

char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char delim[] = "=";
    char delim2[] = ":";
	char *token;
	char *token2;
	char *val;

	for (i = 0; environ[i]; i++)
	{	
		token = strtok(environ[i], delim);
		val = token;
		while (token != NULL)
		{
			  token = strtok(NULL, delim); /*token suite*/
			  if (strcmp(name, val) == 0)
			  {
	  			printf("%s\n", token);
	    		return (token);
			  } 
		}
		token2 = strtok(token, delim2);
		while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
	}
	return (NULL);  
}
int main(void)
{
  _getenv("PATH");
  return (0);
}
