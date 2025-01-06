#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	/*
	pid_t a = fork();
	printf("A");
	pid_t b = fork();
	printf("B");
	pid_t c = fork();
	printf("C"); //ABCABCABCABCABCABCABCABC
	*/
	
	pid_t a = fork();
	printf("A\n");
	pid_t b = fork();
	printf("B\n");
	pid_t c = fork();
	printf("C\n");
	/*
	o/p:
	
	A
	A
	B
	B
	C
	B
	C
	C
	B
	C
	C
	C
	C
	C
	*/
	return 0;
}
