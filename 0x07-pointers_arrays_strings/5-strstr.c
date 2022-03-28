#include "main.h"
#include <stddef.h>
/**
 * _strstr - find a character in the string
 * @haystack: string
 * @needle: character to find
 * Return: the same character or NULL
 */
/*文字列haystack(乾草の山)からneedle(針)を探す。
文字列haystackの中に文字列needleが部分文字列として含まれていればその位置を返す
haystackのi文字目以降とneedleとが一致するか、
すなわちhaystack[i+0], haystack[i+1], haystack[i+2]... と
needle[0], needle[1], needle[2] ... が一致するかを調べる
iは"ずらし幅": haystackの先頭からiだけずらした位置にneedleがあるかを調べる
jは上記の0, 1, 2 ... に相当する*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
/*比較の途中で一致しない箇所が見つかったら調査を終了して次のiへ*/
				break;
		}
		if (needle[j] == '\0')/*一致したのでそのアドレスを返す*/
			return (&haystack[i]);
	}
	return (0);/*一致箇所が見つからなかった*/
}
