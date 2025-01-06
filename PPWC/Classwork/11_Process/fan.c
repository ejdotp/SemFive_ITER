/*WAP For this tree:
		  P1
		  |
		 P2
		 |
		P3
	  / | \
	P4 P5 P6
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void createChild(char n[])
{
	pid_t px = fork();
	if(px == 0){
		printf("%s process: PID = %d Parent PID = %d\n", n, getpid(), getppid());
		exit(0);
	}else{
		wait(NULL);
	}
}

int main()
{
	printf("P1 process: PID = %d\n", getpid());
	pid_t p2 = fork();
	if(p2==0){
		printf("P2 process: PID = %d Parent PID = %d\n", getpid(), getppid());
		pid_t p3 = fork();
		if(p3 == 0){
			printf("P3 process: PID = %d Parent PID = %d\n", getpid(), getppid());
			createChild("P4");
			createChild("P5");
			createChild("P6");
			
			exit(0);
		}else{
			wait(NULL);
		}
		
		exit(0);
	}else{
		wait(NULL);
	}
	
	return 0;
}

/*Output:

P1 process: PID = 4757
P2 process: PID = 4758 Parent PID = 4757
P3 process: PID = 4759 Parent PID = 4758
P4 process: PID = 4760 Parent PID = 4759
P5 process: PID = 4761 Parent PID = 4759
P6 process: PID = 4762 Parent PID = 4759
*/
