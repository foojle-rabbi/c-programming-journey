#include<stdio.h>
int main()
{
    int i, a[5], odd=0, even=0;
    printf("Enter 5 value:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    printf("the value of arry: ");
    for(i=0; i< 5; i++) {
        printf("%d ", a[i]);
        if(a[i] % 2== 0)
            odd = odd + a[i];
        else
            even = even +a[i];
    }
    printf("sum of odd, %d\n", odd);
    printf("sum of even : %d\n", even);
    return 0;
}