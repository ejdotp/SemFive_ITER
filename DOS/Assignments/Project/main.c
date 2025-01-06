#include <stdio.h>
#include <stdlib.h>
#include "FCFS.c" 
#include "RR.c"   

int main() {
    int choice;

    printf("CPU Scheduler for Simulating CPU Scheduling Policies.\n");

    while (1) {
        printf("\nChoose Option\n");
        printf("1 -> FCFS (First-Come, First-Served)\n");
        printf("2 -> RR (Round Robin)\n");
        printf("3 -> EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                FCFS();
                break;

            case 2:
                RR(); 
                break;

            case 3:
                printf("Exited CPU Scheduler\n");
                exit(0); 

            default:
                printf("Wrong Input!\n");
                break;
        }
    }

    return 0;
}
