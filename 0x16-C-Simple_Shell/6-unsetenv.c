#include "main.h"

int _unsetenv(const char *name)
{
	extern char **environ;

}

int main(void)
{
	_unsetenv();
	return (0);
}