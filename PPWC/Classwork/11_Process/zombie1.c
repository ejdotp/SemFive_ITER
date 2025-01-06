#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	pid_t id;
	printf("Parent Process : Executed by parent process before fork() - PID = (%d)\n", getpid());
	id = fork();
	if(id < 0){
		printf("\nfork failed\n");
		exit(-1);
	}
	if(id > 0){
		sleep(100);
	}else{
		exit(0);
	}
	
	return 0;
}
