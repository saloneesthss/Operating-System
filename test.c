#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *sample() {
    printf("Thread is executed.");
}
int main() {
    pthread_t tid;
    pthread_create(&tid,NULL,&sample,NULL);
    pthread_join(tid,NULL);
    return 0;
}