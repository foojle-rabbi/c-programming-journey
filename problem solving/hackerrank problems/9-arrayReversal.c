#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        int first = arr[i];
        int last = arr[n - 1 - i];

        arr[i] = last;
        arr[n - 1 - i] = first;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}