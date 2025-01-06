#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int a = 2;
	while(a>0){
		int c = fork();
		if(c == 0){
			a++;
			printf("a=%d\n", a);
		}else{
			wait(NULL);
			a--;
		}
	}
	return 0;
}

