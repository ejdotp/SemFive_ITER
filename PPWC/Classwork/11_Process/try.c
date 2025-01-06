#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	printf("I am only one process\n");
	pid_t rVal = fork();
	
	if( rVal > 0 ){
		printf("I am Parent\n");
		int sum = 2+3;
		printf("sum = %d\n", sum);
		printf("rVal = %d\n", rVal);
	}
	if( rVal == 0 ){
		printf("I am Child\n");
		int mul = 2*3;
		printf("mul = %d\n", mul);
		printf("rVal = %d\n", rVal);
	}
	
	return 0;
}
