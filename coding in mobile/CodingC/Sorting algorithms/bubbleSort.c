#include<stdio.h>

void bubbleSort(int a[], int n);

int main()
{
    int num[]= {2,6,7,1,4};

    bubbleSort(num,5);

    for(int i=0; i<5; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}

void bubbleSort(int a[], int n) {
    int i,j,temp;

    for(i=0; i<n; i++) {
        for(j=0; j<n-1-i; j++) {
            if(a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}