#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{ 
	/*
	ex1
    fork();
	printf("ITER "); //ITER ITER
	
	ex2
	fork();
	fork();
	printf("ITER "); //ITER ITER ITER ITER
	
	ex3
	fork();
	printf("ITER1 ");
	fork();
	printf("ITER2 "); //ITER1 ITER2 ITER1 ITER2 ITER1 ITER2 ITER1 ITER2
	
	ex4
	fork();
	printf("ITER1\n");
	fork();
	printf("ITER2\n");
		ITER1
		ITER1
		ITER2
		ITER2
		ITER2
		ITER2
		
		FFLUSH(STDOUT) USE THIS FOR THAT \N PROBLEM
		
	ex5
	fork();
	printf("A\n")       //A
	fork();             //A
	
	This bhedbhav between '\n' and ' ' is happening due to buffer which stores all the single lines at once. So exam re we consider '\n' by default
	
	ex6
	int id = fork();
	if( id != 0 ){
		fork();
	}
	printf("Hello\n");
	
	ex7
	int id = fork();
	if( id == 0 ){
		fork();
	}
	printf("Hello\n");
	
	ex8
	int id = fork();
	if( id != 0 ){
		fork();
		fork();
	}
	printf("Hello\n");
	
	ex9
	int id = fork();
	if( id == 0 ){
		fork();
		fork();
	}
	printf("Hello\n");
	*/
	
	
	return 0;
}
