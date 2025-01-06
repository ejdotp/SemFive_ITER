#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t c1 = fork();
	if(c1 == 0){
		fprintf(stderr, "Child Process ID: %d\n", getpid());
		while(1);
	}
	else{
		fprintf(stderr, "Parent Process ID: %d\n", getpid());
		wait(NULL);
		while(1);
	}
	
	return 0;
}
