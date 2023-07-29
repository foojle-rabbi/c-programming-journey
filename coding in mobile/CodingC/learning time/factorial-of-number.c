#include<stdio.h>

int main()
{
    int i,num, fact = 1;
    
    printf("Enter a number of multiplication; ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
        fact *= i;
    }
    
    printf("factotial of %d is = %d\n", num,fact);
    return 0;
}