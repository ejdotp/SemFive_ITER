#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int no; 
    float at, bt; 
    float pc, tat;
    float wt, rt, rd;
    struct node *next;
} NODE;

void create_insert(NODE **p, int no, float at, float bt, float *fr)
{
    NODE *q, *r = *p;
    q = (NODE *)malloc(sizeof(NODE));
    q->no = no;
    q->at = at;
    q->bt = bt;
    q->rt = *fr - at; 
    q->pc = *fr + bt;
    q->tat = q->pc - at; 
    q->wt = q->tat - bt; 
    q->rd = q->tat / bt;   
    *fr = *fr + bt;           
    q->next = NULL;

    if (*p == NULL)
        *p = q;
    else
    {
        while (r->next != NULL)
            r = r->next;
        r->next = q;
    }
}

void gantt_chart(NODE *p, int process)
{
    int i;
    NODE *r = p;

    printf("\nGantt Chart:\n");

    for (i = 0; i < process; i++)
        printf("|\tP%d\t", p->no), p = p->next;
    printf("|\n");

    printf("%.1f\t", r->at);
    for (i = 0; i < process; i++)
    {
        printf("%.1f\t", r->pc);
        r = r->next;
    }
    printf("\n");
}

void display(NODE *p, int process)
{
    float ttat = 0, twt = 0, trt = 0, tbt = 0;

    printf("\nProcess Details:\n");
    printf("***************************************\n");
    printf("Pro\tArTi\tBuTi\tTaTi\tWtTi\tRTi\n");
    printf("***************************************\n");

    while (p != NULL)
    {
        printf("%d\t", p->no);
        printf("%.2f\t", p->at);
        printf("%.2f\t", p->bt);
        printf("%.2f\t", p->tat);
        printf("%.2f\t", p->wt);
        printf("%.2f\n", p->rt);

        ttat += p->tat;
        twt += p->wt;
        trt += p->rt;
        tbt += p->bt;

        p = p->next;
    }

    printf("\nOverall Details:\n");
    printf("Average Turn Around Time: %.2f\n", ttat / process);
    printf("Average Waiting Time: %.2f\n", twt / process);
    printf("Average Response Time: %.2f\n", trt / process);
}

void FCFS()
{
    NODE *head = NULL;
    int process, i;
    float arrival_time, burst_time, first_response = 0;

    printf("First-Come, First-Served (FCFS) Scheduling\n");
    printf("Enter Number of Processes: ");
    scanf("%d", &process);

    for (i = 1; i <= process; i++)
    {
        printf("\nEnter the Details for Process %d:\n", i);
        printf("Arrival Time: ");
        scanf("%f", &arrival_time);
        printf("Burst Time: ");
        scanf("%f", &burst_time);

        if (i == 1)
            first_response = arrival_time;

        create_insert(&head, i, arrival_time, burst_time, &first_response);
    }

    gantt_chart(head, process);
    display(head, process);
}
