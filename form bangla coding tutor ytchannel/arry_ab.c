#include<stdio.h>
int main()
{
    int a[5], b[5], ab[5];
    int i, sum=0;
    printf("Enter the value of A\n");
    for(i = 0; i <= 4; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the value of B\n");
    for(i = 0; i <= 4; i++) {
        scanf("%d", &b[i]);
    }
    for(i = 0; i <= 4; i++) {
        ab[i]  = a[i] + b[i];
    }
    printf("value of AB = A + B\n");
    for(i = 0; i <= 4; i++) {
        printf("%d\n", ab[i]);
    }
    return 0;
}