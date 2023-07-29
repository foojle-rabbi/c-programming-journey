#include<stdio.h>
#define capacity 5
int top = 0;

void push(int *a, int item);
int pop(int a[]);
int peek(int *a);

int main()
{
    int a[capacity];

    push(a, 10);
    push(a, 20);
    push(a, 30);
    push(a, 40);
    push(a, 50);

    push(a, 60);
    printf("\n");
    printf("printing the array: ");
    for(int i=0; i<capacity; i++) {
        printf("%d ", a[i]);
    }

    printf("peek items %d\n", peek(a));
    return 0;
}

void push(int *a, int item) {
    if(top < capacity) {
        a[top] = item;
        printf("Successfully added %d at index number %d\n", a[top], top);
        top++;
    } else {
        printf("Exception! no space\n\n");
    }
}

int pop(int a[]) {
    if(top == 0) {
        printf("There is no value\n");
        return -1;
    } else {
        top--;
        int item = a[top];
        return item;
    }
}

int peek(int *a) {
    if(top == 0) {
        printf("No value\n");
    } else {
        int item = a[top-1];
        return item;
    }
}






