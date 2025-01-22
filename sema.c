// WAP to implement Semaphore two-process synchronization using semaphore

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

void *Fun1();
void *Fun2();
int shared = 10;
sem_t sem;

int main() {
    sem_init(&sem, 0, 1);

    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, Fun1, NULL);
    pthread_create(&thread2, NULL, Fun2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final value of shared variable: %d\n", shared);
}

void *Fun1() {
    int n;
    sem_wait(&sem);
    n = shared;
    n = n + 1;
    shared = n;
    sem_post(&sem);
}

void *Fun2() {
    int y;
    sem_wait(&sem);
    y = shared;
    y = y - 1;
    shared = y;
    sem_post(&sem);
}
