#include<stdio.h>

int main()
{
    int n, num[100], i;

    printf("How many number you wanna compare: ");
    scanf("%d", &n);

    printf("Enter %d number: ", n);

    for(i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    int min = num[0];

    for(i=0; i<n; i++) {
        if(min > num[i])
            min = num[i];
    }

    printf("%d is the minimum number.\n", min);

    return 0;
}