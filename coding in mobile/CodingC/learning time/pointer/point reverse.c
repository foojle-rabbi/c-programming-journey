#include<stdio.h>

void reverse(int *a, int n);

int main()
{
    int array[]= {1,2,3,5,7,8};

    reverse(&array,6);

    for(int i=0; i<6; i++) {
        printf("%d ",array[i]);
    }
    return 0;
}

void reverse(int *a, int n) {
    int i;
    for(i=0; i<n/2; i++) {
        int first = a[i];
        int last = a[n-i-1];

        a[i] = last;
        a[n-1-i] = first;
    }
}
