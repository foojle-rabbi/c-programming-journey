#include<stdio.h>

void selectionSort(int a[], int n);

int main()
{
    int num[] = {10,5,2,8,7};
    int n= 5,i;

    selectionSort(num,n);

    for(i=0; i<n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}

void selectionSort(int a[], int n) {
    int i,j,min_index,temp;

    for(i=0; i<n; i++) {
        min_index = i;
        for(j=i+1; j<n; j++) {
            if(a[min_index] > a[j]) {
                min_index = j;
            }
        }

        if(min_index != i) {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;

        }
    }
}