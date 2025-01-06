/*WAP For this tree:
		 [  P   ]
	  	 /  |  \
	  	C1 C2  C2
	  	   | \
	  	  C4 C5
	  	     |
	  	    C6
	  	    |
	  	   C7
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
	printf("P process: PID = %d\n", getpid());
	
	createChild("C1");
	pid_t c2 = fork();
	if(c2==0){
		printf("C2 process: PID = %d Parent PID = %d\n", getpid(), getppid());
		createChild("C4");
		pid_t c5 = fork();
		if(c5 == 0){
			printf("C5 process: PID = %d Parent PID = %d\n", getpid(), getppid());
			pid_t c6 = fork();
			if(c6 == 0){
				printf("C6 process: PID = %d Parent PID = %d\n", getpid(), getppid());
				pid_t c7 = fork();
				if(c7 == 0){
					printf("C7 process: PID = %d Parent PID = %d\n", getpid(), getppid());
					exit(0);
				}else{
					wait(NULL);
				}
				exit(0);
			}else{
				wait(NULL);
			}
			
			exit(0);
		}else{
			wait(NULL);
		}
		
		exit(0);
	}else{
		wait(NULL);
	}
	createChild("C3");
	
	return 0;
}

/*Output:

P process: PID = 4856
C1 process: PID = 4857 Parent PID = 4856
C2 process: PID = 4858 Parent PID = 4856
C4 process: PID = 4859 Parent PID = 4858
C5 process: PID = 4860 Parent PID = 4858
C6 process: PID = 4861 Parent PID = 4860
C7 process: PID = 4862 Parent PID = 4861
C3 process: PID = 4863 Parent PID = 4856
*/
