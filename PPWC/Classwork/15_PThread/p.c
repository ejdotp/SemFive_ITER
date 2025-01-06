#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

//Thread function
void *print_message(void *arg)
{
	char *message = (char *)arg;
	printf("%s\n", message);
	
	pthread_exit(NULL);
}

int main()
{
	printf("AjaD: %d\n\n", getpid());
	
	pthread_t thread1, thread2;
	
	pthread_create(&thread1, NULL, print_message, "Hello from Thread 1.");
	pthread_create(&thread2, NULL, print_message, "Hello from Thread 2.");
	
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	sleep(100);
	printf("Hello\n");
	
	return 0;
}
