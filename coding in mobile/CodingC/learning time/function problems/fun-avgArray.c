#include<stdio.h>

void avgArray(int a[], int n);

int main()
{
    //Average of an array
    int a[]= {1,2,3,4,5};

    int size = sizeof(a)/sizeof(a[0]);

    avgArray(a,size);

    return 0;
}

void avgArray(int a[], int n) {
    int sum=0,i;
    for(i=0; i<n; i++) {
        sum += a[i];
    }

    printf("Avarage number of array is: %d\n", sum/n);
}