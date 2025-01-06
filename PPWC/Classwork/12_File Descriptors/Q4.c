/*Q4: Develop a c program to write and read a message using pipe() that demonstrates
inter-process communication (IPC). This program involves both the parent and child
processes: the parent writes to the pipe, and the child reads from the pipe.

OR

Write a parent child code where the child receives a string from the user and 
shares it to the parent using pipe.
Parent process sent message: Hello from parent process!
Child process received message: Hello from parent process!*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int fd[2];                                                     
	pid_t pid;                                      
	char write_msg[] = "Hello from parent!";
	char read_msg[100];                                          
	pipe(fd);
	pid = fork();
	if (pid == 0) {
		close(fd[1]);
		read(fd[0], read_msg, sizeof(read_msg));
		printf("Child process received message: %s\n", read_msg);
		close(fd[0]); 
	}
	else {
		close(fd[0]); 
		write(fd[1], write_msg, strlen(write_msg) + 1); //+1 include null terminator
		printf("Parent process sent message: %s\n", write_msg);
		close(fd[1]);
		wait(NULL);
	}
	
	return 0;
}

