#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *arraypass (void *arg)
{
	int *ar, i, sum = 0;
	ar=(int *)arg;
	
	for (i = 0; i < 4; i++){
 		sum += *(ar+i);
	}
	
	printf("Received sum: %d\n", sum);
	
	pthread_exit(NULL);
}

int main()
{
	int arr[] = { 10, 20, 30, 40 };

	pthread_t tid;
	pthread_create(&tid, NULL, arraypass, (void *)arr);
	pthread_join(tid, NULL);
	printf("Bye....main thread\n");
	
	return 0;
}
