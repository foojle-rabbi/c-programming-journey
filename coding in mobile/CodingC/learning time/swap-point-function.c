#include<stdio.h>

void swap(int *ptr1,int *ptr2){
    
    int temp;
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
};

int main()
{
    int x=10, y=20;
    
    printf("before swapping: \nx = %d\ny = %d\n", x,y);
    
    swap(&x,&y);
    
    printf("\nafter swapping: \nx = %d\ny = %d\n", x,y);
    
    return 0;
}