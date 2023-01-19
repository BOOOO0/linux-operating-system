#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main(){
    pid_t pid;
    
    pid = fork();

    if (pid == 0) {
        execlp("/bin/ls", "ls", "-al",NULL);
        printf("LINE J\n");
    }
    else if (pid > 0){
        wait(NULL);
        printf("Child Complete\n");
    }

    return 0;
}