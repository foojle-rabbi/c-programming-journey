#include<stdio.h>

#define capacity 5
typedef struct {
    int front;
    int rear;
    int data[capacity+1];
} Queue;

void enqueue(Queue *a, int item);
void dequeue(Queue *p);
void printQ(Queue *a);

int main()
{
    Queue my_Q;
    my_Q.front = 0;
    my_Q.rear = 0;

    enqueue(&my_Q, 10);
    enqueue(&my_Q, 20);
    enqueue(&my_Q, 30);
    enqueue(&my_Q, 40);  
    
    //I dont know where but i made a mistake
    
    dequeue(&my_Q);
    enqueue(&my_Q, 50);
    
    printf("rear : %d\n", my_Q.rear);
    
    printQ(&my_Q);

    return 0;
}

void enqueue(Queue *a, int item) {
    if((a->rear +1) % capacity == a->front) {
        printf("Sorry, the queue is full\n");
    } else {
        a->data[a->rear] = item;
        printf("Successfully added %d\n", a->data[a->rear]);
        a->rear = (a->rear +1)%capacity;
    }
}

void dequeue(Queue *p) {
    if(p->front == p->rear) {
        printf("Sorry, the Queue is empty\n");
    } else {
        printf("Removed %d\n", p->data[p->front]);
        p->data[p->front] = -1;
        p->front = (p->front +1) % capacity;
    }
}

void printQ(Queue *a) {
    printf("The value of Queue: ");
    for(int i=0; i<capacity-1; i++) {
        printf("%d ", a->data[i]);
    }
    printf("\n");
}
