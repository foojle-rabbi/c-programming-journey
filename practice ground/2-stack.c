#include<stdio.h> 

#define max 5

struct stack{
    int data[max];
    int top;
};

int isFull(struct stack *s){
    if(s->top == max -1){
        return 1;
    }

    return 0;
}

int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

void push(struct stack *s, int data){
    if(isFull(s)){
        printf("Stack is full\n");
        return;
    }
    s->top = s->top +1;
    s->data[s->top] = data;
}

void display(struct stack s){
    printf("Elements of stack: ");
    for(int i = 0; i <= s.top; i++){
        printf("%d ", s.data[i]);
    }
    printf("\n");
}

void pop(struct stack *s){
    if(isEmpty(s)){
        printf("staxk is empty\n");
        return;
    }
    s->top--;

}

int peek(struct stack *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->data[s->top];
}

int main() {
    struct stack s;
    s.top = -1;

    pop(&s);
    push(&s, 5);
    push(&s, 10);
    push(&s, 15);
    push(&s, 20);
    display(s);

    printf("Value at bottom %d\n", peek(&s));
    pop(&s);
    display(s);
    printf("Value at bottom %d\n", peek(&s));
    
    return 0;
}