#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int id, *rvar;
	key_t key = ftok("key.txt", 65);
	id = shmget(key, sizeof(int), 0664);
 	printf("Shared memory Identifier = %d\n", id);
 	
 	rvar = (int *)shmat(id, NULL, 0);
 	printf("Value in shared memory = %d\n", *rvar);
 	*rvar = 600;
 	printf("Value updated in shared memory = %d\n", *rvar);
 	shmdt(rvar);
 	
 	return 0;
}
