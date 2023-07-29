#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int sum = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    free(arr);
    printf("%d\n", sum);

    return 0;
}