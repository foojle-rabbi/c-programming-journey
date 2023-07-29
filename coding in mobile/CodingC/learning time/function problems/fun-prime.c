#include<stdio.h>

void prime(int n);

int main()
{
    //function for factorial
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    prime(number);
    return 0;
}

void prime(int n) {
    int isPrime = 1;
    int i,j;
    for(i=2; i<n; i++) {
        if(n%i == 0) {
            isPrime=0;
        }
    }
    if(isPrime) {
        printf("%d is a Prime Number\n", n);
    } else {
        printf("%d is Not a prime number\n", n);
    }
}