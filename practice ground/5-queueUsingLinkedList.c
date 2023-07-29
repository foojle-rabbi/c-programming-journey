#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Coudnt create node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if(front == NULL){
        front = rear = newNode;
    } else{
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue(){
    int val = -1;
    if(front == NULL){
        printf("Empty queue\n");
        return val;
    }
    val = front->data;
    struct node* temp = front;
    front = front->next;

    free(temp);

    return val;
}

void display(){
    while(front != NULL){
        printf("%d ", front->data);
        front = front->next;
    }
}

int main() {
    
    printf("Dequed item %d\n", dequeue());
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequed item %d\n", dequeue());
    display();
    return 0;
}