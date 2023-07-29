#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front;
struct node* rear;

struct node* createNode(int data){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL){
        printf("Coudn't create node\n");
        exit(1);
    }

    new->data = data;
    new->next = NULL;

    return new;
}

int isEmpty(){
    if(front == NULL){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    struct node* new = createNode(data);

    if(front == NULL){
        rear = front = new;
    }else{
        rear->next = new;
        rear = new;
    }
}

int pop(){
    int val = front->data;
    struct node* temp = front;
    front = front->next;
    free(temp);

    return val;
}

void display(){
    printf("Elements of queue: ");
    while(front != NULL){
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

int main()
{
    front = rear = NULL;

    push(19);
    push(9);
    push(12);
    // display();  
    while(!isEmpty()){
        printf("popped item: %d\n", pop());
    }
    return 0;
}