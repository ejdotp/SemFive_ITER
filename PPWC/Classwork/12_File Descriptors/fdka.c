#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main()
{
	int fd[2],fs[2],fds[2];
	pipe(fd);
	pipe(fs);
	pipe(fds);
	sleep(100);
	return 0;
}

/*
student@C-126-C045:~/$ gcc fdka.c
student@C-126-C045:~$ ./a.out &
[1] 5580
student@C-126-C045:~$ cd /proc/5580/fd
student@C-126-C045:/proc/5580/fd$ ls -l
total 0
lrwx------ 1 student student 64 Dec 13 16:39 0 -> /dev/pts/1             //3 Standard FDs where 0: stdin
lrwx------ 1 student student 64 Dec 13 16:39 1 -> /dev/pts/1             //                     1: stdout
lrwx------ 1 student student 64 Dec 13 16:39 2 -> /dev/pts/1             //                     2: stderr
lr-x------ 1 student student 64 Dec 13 16:39 3 -> 'pipe:[68812]'         //2 FDs for each pipe = 6
l-wx------ 1 student student 64 Dec 13 16:39 4 -> 'pipe:[68812]'         //  Total = 9 FDs
lr-x------ 1 student student 64 Dec 13 16:39 5 -> 'pipe:[68813]'
l-wx------ 1 student student 64 Dec 13 16:39 6 -> 'pipe:[68813]'
lr-x------ 1 student student 64 Dec 13 16:39 7 -> 'pipe:[68814]'
l-wx------ 1 student student 64 Dec 13 16:39 8 -> 'pipe:[68814]'
student@C-126-C045:/proc/5580/fd$
*/
