// Write a program to implement threading in C programming

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *Fun1();
void *Fun2();
int shared = 8;

int main() {
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, Fun1, NULL);
    pthread_create(&thread2, NULL, Fun2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final value of shared variable: %d\n", shared);
}

void *Fun1() {
    int x;
    x = shared;
    x = x + 1;
    sleep(1);
    shared = x;
}

void *Fun2() {
    int y;
    y = shared;
    y = y - 1;
    sleep(1);
    shared = y;
}
