#include <stdio.h>
#include <unistd.h>

int main()
{
	int len;
	printf("Enter the Length: ");
	scanf("%d", &len);
	int fib[len];
	if(vfork() == 0){
		fib[0] = 0;
		fib[1] = 1;
		for(int i = 2; i < len; i++)
			fib[i] = fib[i-1] + fib[i-2];
		_exit(0);
	}
	printf("\nFibonacci Series: ");
	for(int i = 0; i < len; i++)
		printf("%d ", fib[i]);
	printf("\nPrimes in the series:-\n");
	for(int i = 3; i < len; i++){
		int isPrime = 1;
		for(int j = 2; j*j <= fib[i]; j++){
			if(fib[i]%j == 0)
				isPrime = 0;
		}
		if(isPrime)
			printf("%d at index %d\n", fib[i], i);
	}

	return 0;
}
