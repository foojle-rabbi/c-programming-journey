#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int data){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("coudn't create node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    if(front == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue(){
    int val = -1;
    if(front == NULL){
        return val;
    }
    val = front->data;
    struct node* temp = front;
    front = front->next;
    free(temp);

    return val;
}

void display(){
    if(front == NULL){
        printf("Empty queue\n");
    }
    while(front != NULL){
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

int main() 
{
    enqueue(5);
    enqueue(10);
    enqueue(12);
    printf("Dequeing item %d\n", dequeue());
    display();
    
    return 0;
}
