#include<stdio.h>

void max(int *a, int n);

int main()
{
    //write a program to find the maximum of array
    int arr[] = {10,30,40,20,50};

    max(arr, 5);
    return 0;
}

void max(int *a, int n) {
    int m = a[0];
    int i;

    for(i = 0; i<n; i++) {
        if(m<a[i])
            m = a[i];
    }
    printf("Maximum of this array %d\n", m);
}