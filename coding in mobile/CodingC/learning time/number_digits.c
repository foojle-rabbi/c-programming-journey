#include<stdio.h>

int main()
{
    int number, n = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while(number != 0) {
        number = number / 10;
        n += 1;
    }
    
    printf("there are %d digits\n", n);

    return 0;
}