#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void display(){
    if(top == NULL){
        printf("Stack is empty\n");
        return;
    }
    printf("Elements of stacks: ");
    while(top != NULL){
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

void push(int data){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Coudn'nt create node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == NULL){
        printf("Empty stack\n");
        return;
    }

    struct node *temp = top;
    top = top->next;
    free(temp);
}

int main() {
    push(5);
    push(10);
    display();

    // pop();
    // pop();
    display();
    
    return 0;
}