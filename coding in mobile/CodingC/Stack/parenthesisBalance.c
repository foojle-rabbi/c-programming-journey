#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;
struct node {
    char ch;
    Node *next;
};

int isFull(Node *top) {
    Node *n =(Node*) malloc(sizeof(Node));
    if(n==NULL) {
        return 1;
    }

    return 0;
}

int isEmpty(Node *top) {
    if(top == NULL) {
        return 1;
    }

    return 0;
}

Node *push(Node *top, char ch) {
    Node *n =(Node*) malloc(sizeof(Node));
    if(isFull(top)) {
        printf("Stack is Full");
    }
    n->ch = ch;
    n->next=top;
    // printf("Successfully pushed %c\n", n->ch);

    return n;
}

Node *pop(Node *top) {
    if(isEmpty(top)) {
        //exit(1);
        //printf("stack is empty\n");
    }
    //printf("Successfully popped %c\n", top->ch);
    Node *temp = top;
    top = top->next;
    free(temp);

    return top;
}

int isBalance(const *ch) {
    Node *top=NULL;
    int i=0;

    while(ch[i] != '\0') {
        char c = ch[i];
        if(c == '(') {
            top = push(top, c);
        } else if(c ==')') {
            if( isEmpty(top) ) {
                return 0;
            }
            top = pop(top);
        }

        i++;
    }

    if(isEmpty(top)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char ch[] = "7-(8(3*9)+11+12))-8)";

    if(isBalance(ch)) {
        printf("Balanced");
    } else {
        printf("Imbalanced");
    }
    return 0;
}