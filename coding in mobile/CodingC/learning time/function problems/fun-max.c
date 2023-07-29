#include<stdio.h>

int max(int a, int b, int c);

int main()
{
    //maximum of three number
    int a,b,c;

    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b,&c);

    printf("Maximum: %d\n",max(a,b,c));

    return 0;
}

int max(int a, int b, int c) {
    int m;

    if(a>b && a>c) {
        m = a;
    } else if(b>a && b>c) {
        m = b;
    } else if(c>a && c>b) {
        m = c;
    } else {
        printf("Numbers are equal\n");
        return -1;
    }
    return m;
}