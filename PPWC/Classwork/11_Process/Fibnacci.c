#include <stdio.h>
#include <unistd.h>

int main()
{
	int len = 10;
	int fib[len];
	printf("Parent ID = %d\n", getpid());
	if(vfork() == 0){
		printf("Child ID = %d\n", getpid());
		fib[0] = 0;
		fib[1] = 1;
		for(int i = 2; i < len; i++)
			fib[i] = fib[i-1] + fib[i-2];
		_exit(0);
	}
	printf("\nFibonacci Series: ");
	for(int i = 0; i < len; i++)
		printf("%d ", fib[i]);
	printf("\n");
	
	return 0;
}

/*Output:

Parent ID = 5072
Child ID = 5073

Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 

*/
