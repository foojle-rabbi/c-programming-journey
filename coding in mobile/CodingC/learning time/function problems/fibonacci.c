#include<stdio.h>

int main()
{
    //print the Fibonacci series up to a given number.
    int range,first,second,fibo,count;
    first=count=fibo=0;
    second = 1;

    printf("Give a range ");
    scanf("%d", &range);

    while(count<range) {
        if(count==0 || count == 1) {
            fibo = count;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        count++;
    }

    getchar();
}