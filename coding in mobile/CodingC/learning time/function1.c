#include<stdio.h>

void sum(int num1, int num2) {
    int result = num1 + num2;
    printf("reault is %d\n", result);
}

int main()
{
    //function
    int a,b;

    printf("Enter two number ");
    scanf("%d %d", &a,&b);

    //int sum = a+b;

    //printf("Summation = %d\n", sum);
    
    sum(a,b);
    
    
    return 0;
}