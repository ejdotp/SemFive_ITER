#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() 
{
    if (vfork() == 0) {
        fprintf(stderr, "\nChild Process ID: %d\nParent Process ID: %d\n", getpid(), getppid());
        execl("/bin/cp", "cp", "file1", "file2", NULL);
    }
    sleep(1);

    if (vfork() == 0) {
        fprintf(stderr, "\nChild Process ID: %d\nParent Process ID: %d\n", getpid(), getppid());
        execl("/bin/cat", "cat", "file2", NULL);
    }
    sleep(1);

    if (vfork() == 0) {
        fprintf(stderr, "\nChild Process ID: %d\nParent Process ID: %d\n", getpid(), getppid());
        execl("/usr/bin/sort", "sort", "-r", "file2", NULL);
    }
    sleep(1);

    while (wait(NULL) > 0);
    fprintf(stderr, "\nParent Process ID: %d\n", getpid());

    return 0;
}
