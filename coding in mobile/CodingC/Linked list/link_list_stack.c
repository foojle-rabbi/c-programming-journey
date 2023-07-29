#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

void display(Node *top) {
    printf("Elements of stack: ");
    while(top != NULL) {
        printf("%d ", top->data);
        top=top->next;
    }
    printf("\n");
}

Node *push(Node *top, int data) {
    Node *n=(Node*) malloc(sizeof(Node));
    if(n==NULL) {
        printf("Couldn’t push\n");
    } else {
        n->data = data;
        //printf("successfully pushed %d\n",n->data);
        n->next = top;
        top=n;

        return top;
    }
}

Node *pop(Node *top) {
    if(top==NULL) {
        printf("Stack is empty\n");
    } else {
        Node *temp;
        temp = top;
        top = top->next;
        free(temp);

        return top;
    }
}

int main()
{
    Node *top=NULL;

    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 15);
    top = push(top, 20);
    display(top);

    top = pop(top);
    display(top);
    return 0;
}







