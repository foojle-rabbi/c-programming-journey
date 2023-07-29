#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack Stack;
struct stack {
    char *arr;
    int top;
};

int isOperator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        return 1;
    }
    return 0;
}

int presidence(char ch) {
    if(ch == '/' || ch=='*') {
        return 2;
    } else if(ch == '+' || ch=='-') {
        return 1;
    }
    return 0;
}

void push(Stack *s, char ch) {
    s->top++;
    s->arr[s->top] = ch;
}

char pop(Stack *s) {
    char temp= s->arr[s->top];
    s->top--;

    return temp;
}

char stacktop(Stack *s) {
    return s->arr[s->top];
}

int isEmpty(Stack *s) {
    if(s->top == -1) {
        return 1;
    }

    return 0;
}

char* infixToPostfix(const char *infix) {
    Stack s;
    s.top = -1;
    s.arr = (char*) malloc(strlen(infix+1)*sizeof(char));
    char *postfix=(char*) malloc(strlen(infix+1)*sizeof(char));

    int i=0, j=0;
    while(infix[i] != '\0') {
        if(!isOperator(infix[i])) {
            postfix[j] = infix[i];
            i++;
            j++;

        } else {
            if(presidence(infix[i]) > presidence(stacktop(&s))) {
                push(&s, infix[i]);
                i++;
            } else {
                postfix[j] = pop(&s);
                j++;
            }
        }
    }
    while(!isEmpty(&s)) {
        postfix[j] = pop(&s);
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

int main()
{
    char exp[] = "a+b-c*y";

    printf("postfix is : %s\n", infixToPostfix(exp));
    return 0;
}