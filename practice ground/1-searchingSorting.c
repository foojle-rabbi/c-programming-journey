#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(int *arr, int n, int key){
    int left = 0; 
    int right = n - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            right = mid - 1; 
        } else{
            left = mid + 1;
        }
    }

    return -1;
}

void selectionSort(int *arr, int n){
    int i, j, minIndex;
    for(i = 0; i < n; i++)
    {
        minIndex = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[minIndex] > arr[j]){
               minIndex = j;
            }
        }

        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void bubbleSort(int *arr, int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n -1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int *arr, int n){
    int i, j, key;
    for(i = i; i < n; i++){
        key = arr[i];
        j = i -1; 

        while(j >= 0 && key < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(int *arr, int low, int mid, int high){
    int i, j, k, *b;
    i = k = low;
    j = mid + 1;

    b = (int*) malloc((high + 1) * sizeof(int));

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            k++; i++;
        } else{
            b[k] = arr[j];
            k++; j++;
        }
    }

    while(i <= mid){
        b[k] = arr[i];
        k++; i++;
    }

    while(j <= high){
        b[k] = arr[j];
        k++; j++;
    }

    for(i = low; i <= high; i++){
        arr[i] = b[i];
    }
}

void mergeSort(int *arr, int low, int high){
    if(low < high){
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void countSort(int *arr, int n){
    int i, max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[0] < arr[i])
        max = arr[i];
    }

    int *count = (int *) malloc((max + 1) * sizeof(int));

    for(i = 0; i <= max; i++){
        count[i] = 0;
    }

    for(i = 0; i < n; i++){
        count[arr[i]] = count[arr[i]] + 1;
    }

    int j = 0;
    for(i = 0; i <= max; i++){
        while(count[i] != 0){
            arr[j] = i;
            j++;
            count[i] = count[i] -1;
        }
    }
}

void display(int *arr, int n){
    printf("Element of array: ");
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 2, 5, 23, 98, 45, 24, 34, 27, 85};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linearSearch(arr, size, 385);
    printf("Item found at %d index\n", index);

    countSort(arr, size);
    display(arr, size);

    index = binarySearch(arr, size, 27);
    printf("Item found at %d index\n", index);
    return 0;
}