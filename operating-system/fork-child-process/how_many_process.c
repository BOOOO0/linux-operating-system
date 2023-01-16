#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main(){

    fork();
    fork();
    fork();

    printf("No more!\n");
    return 0;
}