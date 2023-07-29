#include<stdio.h>

int linear_search(int a[], int n, int x);

int main()
{
    int arr[]= {2,6,8,9,23,45,65,34};

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linear_search(arr,size,10);
    printf("%d index\n", index);
    return 0;
}

int linear_search(int a[], int n, int x) {
    int i;
    for(i=0; i<n; i++) {
        if(x==a[i]) {
            return i;
        }
    }

    return -1;
}