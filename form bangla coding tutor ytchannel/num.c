#include<stdio.h>

int main()
{
    int num;
    printf("Enter Your marks:\n");
    scanf("%d", &num);
    if(num < 34) {
        printf("Oh no! you are failed\n");
    } else if(num < 41) {
        printf("You are passed\n");
    } else if(num < 51) {
        printf("You got B\n");
    } else if(num < 61) {
        printf("Wow you got A\n");
    } else if(num < 71) {
        printf("Wow! You got A-\n");
    } else if(num < 81) {
        printf("Oh Wow! You got A+\n");
    } else if(num <= 100) {
        printf("oh wow great You are obtained Golden A+\n");
    } else {
        printf("Please Enter a number in 0 - 100\n");
    }
    return 0;
}