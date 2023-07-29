#include<stdio.h>

int main()
{
    int n, max = 0, num[100], i;

    printf("How many number you wanna compare: ");
    scanf("%d", &n);

    printf("Enter %d number: ", n);

    for(i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<n; i++) {
        if(max < num[i])
            max = num[i];
    }

    printf("%d is the maximum number.\n", max);

    return 0;
}