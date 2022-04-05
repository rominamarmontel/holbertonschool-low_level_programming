#include "main.h"
/**
 * setenv - changes or adds an environment variable
 * Return : 0
 * 環境変数を変更または追加する 
 * nameが存在しない場合 環境変数 nameに値valueを設定し、環境に追加する。 
 * nameが環境に存在する場合、overwriteが0以外ならばその値をvalueに変更し、
 * overwriteが0ならばnameの値を変更しない
 */

int _setenv(const char *name, const char *value, int overwrite)
{
	extern char **environ;
	int i;

	for (i = 0; environ[i]); i++)
	{
		
	}
}

int main(void)
{
	_setenv("USER");
	return (0);
}
