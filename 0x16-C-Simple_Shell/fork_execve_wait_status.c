#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
 
int main(void) {
  int status;
  pid_t pid = fork();
  if (pid == 0) {
 
    // 子プロセスが実行されている場合
    char *argv[] = {"ls", NULL};
    char *envp[] = {NULL};
    execve("/bin/ls", argv, envp);
 
  } else {
 
    // 親プロセスが実行
    wait(&status);
    // exitされたかどうかをチェック
    if (WIFEXITED(status)) {
      // exit()に渡されたステータスの一部を表示（正常終了なら0を表示）
      printf("Exit: %d\n", WEXITSTATUS(status));
    }
 
  }
}