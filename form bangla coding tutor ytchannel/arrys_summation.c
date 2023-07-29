#include<stdio.h>
int main()
{
    int a[5], jor=0, bijor=0, i;

    for(i = 0; i <= 4; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i <= 4; i++) {
        if(a[i] % 2 == 0)
            jor  = jor + a[i];
    }
    for(i = 0; i <= 4; i++) {
        if(a[i]%2==1)
            bijor  = bijor + a[i];
    }

    printf("the value of arrys : ");
    for(i = 0; i <= 4; i++) {
        printf("%d \n", a[i]);
    }
    printf("sum of odd value : %d\n", jor);
    printf("Sum of even value : %d\n", bijor);
    return 0;
}