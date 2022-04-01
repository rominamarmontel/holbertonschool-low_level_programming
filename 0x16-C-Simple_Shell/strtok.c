#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "aa,bb,cc,dd"; /* 分離する文字列 */
    char delim[] = ","; /* 区切り文字 */
    char *token; /* 分離後の文字列を指すポインタ */
    /* 文字列を分離 */
    token = strtok(str, delim);
    while (token != NULL)
    { /* 文字列が分離できなくなるまでstrtokを実行 */
        printf("%s\n", token); /* 分離後の文字列を表示 */
        token = strtok(NULL, delim);/* 文字列を分離 */
    }

    return 0;
}
