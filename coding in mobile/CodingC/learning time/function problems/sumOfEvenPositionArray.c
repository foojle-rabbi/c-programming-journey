#include<stdio.h>

int main()
{
    //sum of even position
    int a[]={5,12,7,5,3,5,6,8,12,4};
    int i, sum = 0;
    
    for(i=0;i<10;i=i+2){ 
     sum+= a[i];     
    }
    
    printf("Sum is %d\n", sum);
    return 0;
}