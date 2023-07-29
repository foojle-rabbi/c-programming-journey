#include<stdio.h>

#define capacity 3
int rear=0,front=0;

void enqueue(int *a, int x);
void dequeue(int *a);

int main()
{
    int a[capacity + 1];

    enqueue(a, 10);
    enqueue(a, 20);
    enqueue(a, 30);

    dequeue(a);
    enqueue(a, 40);


    printf("front %d\n", front);
    printf("rear %d\n", rear);

    return 0;
}

void enqueue(int *a, int x) {
    if((rear +1) % (capacity +1) == front) {
        printf("Queue if full\n");
    } else {
        a[rear] = x;
        printf("successfully added %d\n", a[rear]);
        rear = (rear + 1) % (capacity +1);
    }
}

void dequeue(int *a) {
    if(front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("deque value : %d\n", a[front]);
        front= (front +1) % (capacity +1);
    }
}
