#include<stdio.h>

void printArray(int a[], int n);

int main()
{
    //frequently of a number
    int a[10]= {1,2,3,3,5,6,3,5,6,8};
    int i,j;
    
    int num=5, count = 0;
    
    for(i=0; i<10; i++) {
        if(num==a[i]){
            count++;
        }
    }

    printf("%d is remain %d times\n", num,count);
    
    
    
    //printArray(b,5);
    
   
    return 0;
}

void printArray(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}