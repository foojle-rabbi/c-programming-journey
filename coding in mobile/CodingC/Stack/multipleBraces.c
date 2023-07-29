#include<stdio.h>
#include<stdlib.h>

typedef struct stack Stack;
struct stack {
    int top;
    char *ch;
    int size;
};

int isEmpty(Stack *s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}

void push(Stack *p, char ch) {
    if(p->top == p->size) {
        printf("Stack is full\n");
    }

    p->top += 1;
    p->ch[p->top] = ch;
}

char pop(Stack *p) {
    if(isEmpty(p)) {
        printf("stack is empty\n");
    }
    char temp = p->ch[p->top];
    p->top--;

    return temp;
}

int isBalanced(const char *exp) {
    int size = strlen(exp);
    int i=0;

    Stack s;
    s.size = size;
    s.ch=(char*) malloc(s.size * sizeof(char));
    s.top=-1;

    while(exp[i] != '\0') {
        if(exp[i] == '(' || exp[i] == '{'||exp[i] == '[') {
            push(&s, exp[i]);
        } else if(exp[i] == ')' || exp[i] == '}'||exp[i] == ']') {
            if(isEmpty(&s)) {
                return 0;
            } else {
                char p = pop(&s);
                if ((exp[i] == ')' && p != '(') ||
                        (exp[i] == '}' && p != '{') ||
                        (exp[i] == ']' && p != '[')) {
                    return 0;
                }
            }
        }
        i++;
    }

    if(isEmpty(&s)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{

    char arr[]="(1+24-ag+){]";

    if(isBalanced(&arr)) {
        printf("Balanced\n");
    } else {
        printf("Imbalanced\n");
    }
    return 0;
}