/**
 * Example program 1.5: primitive shell that takes no arguments.
*/
#include <sys/types.h>
#include <sys/wait.h>
#include "lib/ourhdr.h"

int main(void) {
  char buf[MAXLINE];
  pid_t pid;
  int status;

  printf("%% ");  // print prompt
  while (fgets(buf, MAXLINE, stdin) != NULL) {
    buf[strlen(buf) - 1] = 0; //replace newline with NULL

    if ( (pid = fork()) < 0)
      err_sys("fork_error");

    else if (pid == 0) {
      // child
      execlp(buf, buf, (char *) 0); // execute cmd from stdin
      err_ret("couldn't execute: %s", buf);
      exit(127);
    }

    /* parent */
    if ( (pid = waitpid(pid, &status, 0)) < 0)
      err_sys("waidpid error");
    printf("%% ");
  }
  exit(0);
}
