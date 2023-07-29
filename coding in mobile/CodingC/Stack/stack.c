#include<stdio.h>
#define maxIndex 100

typedef struct stack {
    int index;
    int data[maxIndex];
} stack;

//function prototypes
void push(stack *s1, int item);
int pop(stack *s);

int main()
{
    stack myStack;
    myStack.index = 0;

    push(&myStack, 2);
    push(&myStack, 5);
    push(&myStack, 8);

    printf("%d \n", pop(&myStack));
    printf("%d \n", pop(&myStack));
    printf("%d \n", pop(&myStack));

    return 0;
}

//stack push function
void push(stack *s1, int item) {
    if(s1->index > maxIndex) {
        printf("Stack is full\n");
    } else {
        s1->data[s1->index] = item;
        s1->index++;
    }
}

//stack pop function
int pop(stack *s) {
    int item;
    if(s->index == 0) {
        printf("Stack is empty\n");
        return -1;
    } else {
        s->index--;
        item = s->data[s->index];

    }
    return item;
}