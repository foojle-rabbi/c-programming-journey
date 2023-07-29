#include<stdio.h>

int main()
{
    //calculate the power of a given number using a while loop.
    int num,count,power=1;
    count=0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(count!=num){
        power *= num;
        count++;
    }
    
    printf("The power is : %d\n", power);
    return 0;
}