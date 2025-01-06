#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
#include<stdlib.h>

#define buffersize 10

int in=0;
int out=0;
int buffer[buffersize];

sem_t e;
sem_t m;
sem_t f;

void *pfun(void *param) 
{
	int i,v;
	for(i=0;i<20;i++){
		v=rand()%100+1;
		sem_wait(&e);
		sem_post(&m);
		buffer[in]=v;
		fprintf(stderr,"Produced item=%d\n",v);
		in=(in+1)%buffersize;
		sem_post(&m);
		sem_post(&f);
	}
	pthread_exit(0);
}

void *cfun(void *param) 
{
	int v,i;
	for( i=0;i<20;i++){
		sem_wait(&f);
		sem_wait(&m);
		v=buffer[out];
		out=(out+1)%buffersize;
		sem_post(&m);
		sem_post(&e);
		fprintf(stderr,"Consumed item=%d\n",v);
	}
	pthread_exit(0);
}

int main()
{
	pthread_t tid1,tid2,tid3;
	sem_init(&e,0,buffersize);
	sem_init(&m,0,1);
	sem_init(&f,0,0);
	pthread_create(&tid1,NULL,pfun,NULL);
	pthread_create(&tid2,NULL,cfun,NULL);

	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);

	sem_destroy(&e);
	sem_destroy(&m);

	sem_destroy(&f);
	
	return 0;
}
