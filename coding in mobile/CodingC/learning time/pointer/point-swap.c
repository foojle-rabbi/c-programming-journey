#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int a,b;
    a = 5;
    b = 8;

    printf("before swapping,a = %d & b = %d\n",a,b);

    swap(&a,&b);
    printf("before swapping,a = %d & b = %d\n",a,b);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}