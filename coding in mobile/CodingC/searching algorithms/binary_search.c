#include<stdio.h>

int binary_search(int a[], int n, int x);

int main()
{
    int a[]= {1,3,4,5,7,8,10,14,16,19,20,21,25};
    int size = sizeof(a) / sizeof(a[0]);
    int x = 1;

    printf("index %d\n", binary_search(a,size,x));

    return 0;
}

int binary_search(int a[], int n, int x) {
    int first, last,center;
    first = 0;
    last = n-1;

    while(first <= last) {
        center = (first + last) / 2;
        if(a[center] == x) {
            return center;
        }

        if(a[center] > x) {
            last = center - 1;
        } else {
            first = center + 1;
        }
    }
    return -1;
}