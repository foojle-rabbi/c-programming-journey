#include<stdio.h>

void factorial(int n);

int main()
{
    //function for factorial

    factorial(8);
    return 0;
}

void factorial(int n) {
    int count=0;
    int fact,first = 0;
    int second = 1;
    
    while(count!=n) {
        if(count <=1) {
            fact = count;
        } else {
            fact = first+ second;
            first = second;
            second = fact;
        }
        printf("%d ", fact);
        count++;
    }
}