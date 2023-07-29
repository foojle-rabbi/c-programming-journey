#include<stdio.h>

int calcPower(int b, int e);

int main()
{
    //Power of a given number
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Power is %d\n",calcPower(base,exp));
    return 0;
}

int calcPower(int b, int e) {
    int i,power=1;
    for(i=1; i<=e; i++) {
        power = power * b;
    }
    return power;
}