#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

void main(int argc, char **argv){
    pid_t pid = fork();

    printf("parent process pid before if...else block: %d\n", getpid());

    if (pid == 0) {
        printf("Child process: PID = %d\n\n", getpid());
        // while(1){
        //     //infinite loop
        // }
        sleep(2); //simulating work
    }else if (pid > 0) {
        printf("Parent process: PID = %d\n", getpid());
        // while(1){
        //     //infinite loop
        // }
        wait(NULL);
    }else {
        printf("Error while forking\n");
        exit(EXIT_FAILURE);
    }
}