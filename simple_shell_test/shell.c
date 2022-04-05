#include "main.h"
/**
 * simple shell - function
 * Return: 0
 */
 int main(void)
 {
    char *argv[256];
    char *line = NULL;
    char *delim;
    pid_t id;
    int i;
    size_t len = 0;
    ssize_t lineSize = 0;
    char buff[ 256 ];
    int argc;

while (fgets(buff,sizeof(buff),stdin) != NULL)
{
    argc = split( argv, buff );/*←(2)コマンド名と引数を分離*/
    if ( (argv[0] = check(argv[0])) == NULL )/*←(3)コマンド名の有無をチェック*/
    {
        printf( "Error\n" );/*←(4)コマンド名が見つからないエラー*/
    }
else
{
    execute( argv[0], argv + 1, argc - 1 );/*←(5)バックグラウンドで実行させる*/
}
    free( argv[0] );/*←解放*/
}
    while (1)
    {
        printf("#cisfun$ ");
        line = NULL;
        len = 0;   
        lineSize = getline(&line, &len, stdin);
            if (lineSize == -1)
            {
                free(line);
                return (0);
            }
            line[lineSize - 1] = '\0';
            delim = strtok(line, " ");
            for (i = 0; delim != NULL; i++) 
            {
                argv[i] = delim;
                delim = strtok(NULL, " ");
            }
            argv[i] = NULL;
            id = fork();
            if (id != 0) 
            {
                wait(NULL);
            } 
            else 
            {
                if (execve(argv[0], argv, NULL) == -1)
                {
                    perror("Error\n");
                    return 0;
                }
            }
    }
    free(line);
    return (0);
}