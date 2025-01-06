#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){

	pid_t c = fork();
	
	if(c == -1){
		printf("Fork Failed\n");
		exit(1);
	}
	
	if(c == 0){
		printf("Child executing SumArray.c\n");
		execl("./SumArray", "SumArray", NULL);
		printf("exec failed\n");
		exit(1);
	}else{
		int status;
		waitpid(c, &status, 0);
 		printf("\nParent process:\n");
 		printf("Child PID: %d\nStatus of child: %d\n", c, status);
	}
	
	return 0;
}

/*
Output:

student@C-126-C045:~/2241016309/PPWC/13_exec$ gcc SumArray.c -o SumArray
student@C-126-C045:~/2241016309/PPWC/13_exec$ gcc ForkSum.c -o ForkSum
student@C-126-C045:~/2241016309/PPWC/13_exec$ ./ForkSum
Child executing SumArray.c
Array: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
Sum of the array = 55

Parent process:
Child PID: 4896
Status of child: 0
*/



/*
status = 32 bit for representation 16 bit is used.
Process termination status (int) 16 bit number

1. status value if child process has normal exit/termination ( exit(0) )

 15......8 | 7......0
 XXXXXXXX | XXXXXXXX
 exitStatus | unused
 exit(0) status=0
 
 15......8 | 7......0
 00000000 | 00000000
 exitStatus | unused
 exit(1) status=256
 
 15......8 | 7......0
 00000001 | 00000000
 exitStatus | unused
 
2. killed by signal // stopped by signal

 15......8 | 7 ......0
 unused | X termination signal
 
 kill -9 childpid status = 9 (signal Number)
 00000000 | 00001001
 unused | termination signal
 
3. Core dump flag (Segmentation Fault, Floating point exception)

15......8 | 7 ......0
  unused | 1 termination signal

*/
