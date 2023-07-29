#include<stdio.h>

void printArray(int a[], int n);
void mergeSort(int A[], int low, int high);
void merge(int A[], int low, int mid, int high);

int main()
{
    int a[] = {-2000,6,3,4,9,5,74,7,95,6,86,8};
    int n = sizeof(a) / sizeof(a[0]);


    printArray(a,n);
    mergeSort(a, 0, n-1);
    printArray(a,n);

    return 0;
}

void printArray(int a[], int n) {
    int i;
    printf("Elements of array : ");
    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int A[], int low, int mid, int high) {
    int i, j, k, B[100];
    i = low;
    k = low;
    j = mid +1;

    while(i <= mid && j<= high) {
        if(A[i] < A[j]) {
            B[k] = A[i];
            k++;
            i++;
        } else {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while(i<=mid) {
        B[k] = A[i];
        k++;
        i++;
    }

    while(j<=high) {
        B[k] = A[j];
        k++;
        j++;
    }

    for(i= 0; i<=high; i++) {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high) {
    if(low<high) {
        int mid;
        mid = (low + high) / 2;

        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, low, mid, high);
    }
}






