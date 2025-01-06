#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *var;
	key_t key = ftok("key.txt", 65);
	id = shmget(key, 50, 0664 | IPC_CREAT);
	printf("Shared memory Identifier = %d\n", id);
	var = (int *)shmat(id, NULL, 0);
	*var = 50;
	shmdt(var);
	
	return 0;
}
