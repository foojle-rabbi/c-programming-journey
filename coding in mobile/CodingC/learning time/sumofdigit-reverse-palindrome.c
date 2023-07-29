#include<stdio.h>

int main()
{
    //a given number is a palindrome or not.
    int num, remain,count = 0,reverse=0, sum = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while(num!=0) {
        remain = num % 10;
        num = num /10;
        count++;
        reverse = reverse*10 + remain;
        sum += remain;
    }

    printf("\nThere are %d numbers\n", count);
    printf("Sum of digits: %d\n\n", sum);
    printf("Reversed number: %d\n", reverse);
    printf("You entered : %d\n\n", temp);

    if(temp== reverse) {
        printf("So, The number is palindrome\n");
    } else {
        printf("So, The number is not palindrome\n");
    }
    return 0;
}