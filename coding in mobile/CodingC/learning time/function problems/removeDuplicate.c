#include<stdio.h>

void printArray(int a[], int n);

int main()
{
    //remove diplicate element
    int a[10]= {1,2,3,3,5};
    int b[5],i,j;

    for(j=0,i=0; i<5; i++,j++) {
        if(a[i] != a[j])
        b[i] = a[i];
    }

    printArray(b,5);
    
    
    
    
    
    
    
    
    
    
    
    /*printf("After merging: ");
    for(i=0; i<10; i++) {
        printf("%d ", a[i]);
    }*/
    return 0;
}

void printArray(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}