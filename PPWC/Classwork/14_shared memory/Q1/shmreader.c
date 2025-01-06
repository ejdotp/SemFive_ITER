#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *rvar;
	key_t key = ftok("key.txt", 65);
	id = shmget(key, 50, 0664);
	printf("Shared memory Identifier = %d\n", id);
	rvar = (int *)shmat(id, NULL, SHM_R);
	printf("Value in shared memory = %d\n", *rvar);
	shmdt(rvar);
	shmctl(id, IPC_RMID, NULL);
	
	return 0;
}
