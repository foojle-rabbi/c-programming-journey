#include<stdio.h>

void display (int *a, int n) {
    printf("Elements of array: ");
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int *a, int n) {
    int i,j,key;

    for(i=0; i<n; i++) {
        key = a[i];
        j=i-1;

        while(j>=0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int a[] = {20,10,40,30,50};
    int n = sizeof(a) / sizeof(a[0]);

    display(a,n);

    insertionSort(a,n);
    display(a,n);
    return 0;
}