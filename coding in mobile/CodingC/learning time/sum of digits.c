#include<stdio.h>

int main()
{
    int number, temp, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(number != 0) {
        temp = number % 10;
        sum += temp;
        number = number / 10;
    }
    
    printf("The sum of digits = %d\n", sum);

    return 0;
}