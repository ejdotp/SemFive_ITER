#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
    pid_t pid = fork();

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
parent process pid before if...else block: 18324
This is the parent process and pid is: 18324
parent process pid before if...else block: 18325
This is the child process and pid is: 18325

child is created and they continue running simultaneously hence we see the parent id first.
*/