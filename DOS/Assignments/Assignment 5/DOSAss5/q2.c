#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

int g=0;
sem_t s1;
sem_t s2;

void *tfun1(void *param) {
	for(int i=1;i<=10;i+=2){
		sem_wait(&s1);
		fprintf(stderr,"\n%d",i);
		sem_post(&s2);
	}
	pthread_exit(0);
}

void *tfun2(void *param) {
	for(int i=2;i<=10;i+=2){
		sem_wait(&s2);
		fprintf(stderr,"\n%d",i);
		sem_post(&s1);
	}
	pthread_exit(0);
}

int main() {
	pthread_t tid1,tid2;
	sem_init(&s1,0,1);
	sem_init(&s2,0,0);
	pthread_create(&tid1,NULL,tfun1,NULL);
	pthread_create(&tid2,NULL,tfun2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	sem_destroy(&s1);
	sem_destroy(&s2);
	
	return 0;
}
