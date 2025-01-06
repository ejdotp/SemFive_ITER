/*Q3: Write a program to create a shared memory segment of size 10 bytes. Make 4 attachments to the shared memory segment to the address space of the calling process and print the number of attachments using the structure filed number of current attachments present in the structure shmid_ds defined in the header <sys/shm.h>. Check the number of attachment using the shell provided command ipcs -m.*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
    int shmid;
    char *shm1, *shm2, *shm3, *shm4;
    key_t key;
    struct shmid_ds shm_info;
    
    key = ftok("key.txt", 65);
    shmid = shmget(key, 10, 0666 | IPC_CREAT);
    printf("Shared memory ID: %d\n", shmid);
    
    // Attach the shared memory segment 4 times
    shm1 = (char *)shmat(shmid, NULL, 0);
    shm2 = (char *)shmat(shmid, NULL, 0);
    shm3 = (char *)shmat(shmid, NULL, 0);
    shm4 = (char *)shmat(shmid, NULL, 0);

    // Retrieve the current number of attachments using shmctl
    if (shmctl(shmid, IPC_STAT, &shm_info) == -1) {
        perror("shmctl failed");
        return 1;
    }

    printf("Number of attachments: %ld\n", shm_info.shm_nattch);

    shmdt(shm1);
    shmdt(shm2);
    shmdt(shm3);
    shmdt(shm4);

    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}


/*Output:

student@C-126-C045:~/2241016309/PPWC/14_shared memory$ gcc Q3.c
student@C-126-C045:~/2241016309/PPWC/14_shared memory$ ./a.out
Shared memory ID: 51
Number of attachments: 0
*/

