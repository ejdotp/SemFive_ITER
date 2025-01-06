//single process reads and writes wihtout fork

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int fd[2];
	char writes[] = "Hello World";
	char reads[100];
	pipe(fd);
	
	write(fd[1], writes, strlen(writes) + 1); 
	printf("WRITING: %s\n", writes);
		
	read(fd[0], reads, sizeof(reads));
	printf("READING: %s\n", reads);
	
	close(fd[0]);
	close(fd[1]);

	return 0;
}

