#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    pid_t pid = vfork(); //creating the child process

    printf("parent process pid before if...else block: %d\n", getpid());

    if (pid == 0) {
        printf("This is the child process and pid is: %d\n\n", getpid());
        exit(0);
    }else if (pid > 0) {
        printf("This is the parent process and pid is: %d\n", getpid());
    }else {
        printf("Error while forking\n");
        exit(EXIT_FAILURE);
    }
}

/*
parent process pid before if...else block: 18333
This is the child process and pid is: 18333

parent process pid before if...else block: 18332
This is the parent process and pid is: 18332

child temporarily suspends parent process hence we get child ka first
*/