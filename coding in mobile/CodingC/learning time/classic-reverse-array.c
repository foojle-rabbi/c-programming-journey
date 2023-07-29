#include<stdio.h>

void revarry(int arr[], int n);
void printarry(int arr[], int n);

int main()
{
    int arr[]= {1,2,3,4,5,6};

    revarry(arr, 6);
    printarry(arr, 6);

    return 0;
}

void revarry(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        
        int first = arr[i];
        int second = arr[n-i-1];

        arr[i] = second;
        arr[n-i-1] = first;
    }

}

void printarry(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
