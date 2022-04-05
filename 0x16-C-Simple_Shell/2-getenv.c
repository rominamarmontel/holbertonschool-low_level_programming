#include "main.h"
/**
 * getenv - environment variable functions
 * Return: 0
 * 単一の環境変数とその値を取得
 */
char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char delim[] = "=";
	char *token;
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
	}
	return (NULL);  
}
  
int main(void)
{
  _getenv("PATH");
  return (0);
}

