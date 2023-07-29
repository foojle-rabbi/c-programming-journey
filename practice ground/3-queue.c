#include<stdio.h> 

#define max 5

struct queue{
    int data[max];
    int front;
    int rear;
};

void enqueue(struct queue *q, int data){
    if((q->rear + 1) % max == q->front){
        printf("Queue is full\n");
        return;
    }
    if(q->front == -1){
        q->front = 0;
    }
    q->rear = (q->rear + 1) % max;
    q->data[q->rear] = data;
}

void display(struct queue q){
    if(q.front == -1){
        return;
    }
    printf("Elements of queeue: ");
    int i = q.front;
    
    while(i != q.rear){
        printf("%d ", q.data[i]);
        i = (i + 1) % max;
    }
    printf("%d\n", q.data[q.rear]);
}

int dequeue(struct queue *q){
    int val = -1;
    if(q->front == -1){
        return val;
    }

    val = q->data[q->front];

    if(q->front == q->rear){
        q->front = -1;
        q->rear = -1;
    }
    q->front = (q->front + 1) % max;
    return val;
}

int size(struct queue q){
    int length = 0;
    if(q.front == -1){
        return length;
    }
    int i = q.front;
    while(i != q.rear){
        length++;
        i = (i + 1) % max;
    }

    return length + 1;
}

int main() {
    struct queue q;
    q.front = -1;
    q.rear = -1;

    printf("size of queue %d\n", size(q));
    enqueue(&q, 10);
    printf("size of queue %d\n", size(q));

    // display(q);
    
    return 0;
}