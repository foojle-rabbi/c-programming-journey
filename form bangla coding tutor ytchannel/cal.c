#include<stdio.h>
int main()
{
    int num1,num2;
    char op='+';
    printf("Enter number: ");
    scanf("%d", &num1);

    printf("Enter number: ");
    scanf("%d", &num2);

    printf("Enter Operator: ");
    scanf("%ch",&op);

    switch(op) {
    case '+':
    {
        printf("Result %d\n", num1+num2);

        break;
    }
    case '-':
    {
        printf("Result is %d\n", num1-num2);

        break;
    }
    default :
    {
        printf("Error\n");
    }
    }
    return 0;
}