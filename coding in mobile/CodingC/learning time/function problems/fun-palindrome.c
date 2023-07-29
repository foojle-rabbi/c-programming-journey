#include<stdio.h>

void palindrome(int number);

int main()
{
    //function of palindrome
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    palindrome(x);
    return 0;
}

void palindrome(int number) {
    int temp=number,r,reverse=0;
    while(number != 0) {
        r = number %2;
        reverse = (reverse * 10) + r;
        number /= 10;
    }
    if(temp==reverse) {
        printf("%d is a Palindrome number\n", temp);
    } else {
        printf("%d is not a Palindrome number\n", temp);
    }


}