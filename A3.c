#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <sys/wait.h>

#define SEM_NAME "/print_semaphore" 

void print_PID() {
    int PID = getpid();
    char str[100];
    sprintf(str, "My process id is %d\n", PID);

    for (int i = 0; i < strlen(str); i++) {
        fprintf(stderr, "%c", str[i]);
        sleep(1);
    }
}

int main() {
    sem_t *sem = sem_open(SEM_NAME, O_CREAT | O_EXCL, 0644, 1); 
    if (sem == SEM_FAILED) {
        perror("Semaphore creation failed");
        return 1;
    }

    pid_t child[3];

    for (int i = 0; i < 3; i++) {
        child[i] = fork();
        if (child[i] == 0) {
            sem_wait(sem);    
            print_PID();         
            sem_post(sem);    
            exit(0);    
        }
    }

    for (int i = 0; i < 3; i++) {
        waitpid(child[i], NULL, 0);
    }

    sem_close(sem);   
    sem_unlink(SEM_NAME); 

    return 0;
}
