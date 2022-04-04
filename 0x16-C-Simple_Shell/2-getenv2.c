#include "main.h"
/**
 * getenv - environment variable functions
 * Return: 0
 */

extern int env_var();
// define
#define STR_MAX 256
#define PATH_MAX 512

extern int env_var()
{
	// 変数宣言
	int ret;						// 戻り値(０：正常、-１：異常)
	char env_name_make[STR_MAX];	// 作成する環境変数名
	char env_name_del[STR_MAX];		// 削除する環境変数名
	char path[PATH_MAX];		// ファイルパス
	char *varname;			// putname使用変数

	// 変数初期化
	ret = 0;
	memset(env_name_make, '\0', sizeof(STR_MAX+1));
	memset(env_name_del, '\0', sizeof(STR_MAX+1));
	memset(path, '\0', sizeof(PATH_MAX+1));

	// 環境変数名、パス設定
	strcat(env_name_make, "BBB");
	strcat(env_name_del, "AAA");
	strcat(path, "C:\\Program Files\\");

	// setenv関数(環境変数を作成)
	// setenv(const char *name, const char *value, int overwrite);
	ret = setenv(env_name_make, path, 0);

	// unsetenv関数(環境変数を削除)
	// int unsetenv(const char *name);
	ret = unsetenv(env_name_del);

	// putname関数(環境変数の作成/変更/削除)
	putname(varname = env_name_del);

	return ret;
}

