#include<stdio.h>

int main()
{
    int a[]= {1,2,3,4,5};
    int b[5];
    int i,j;

    for(i=0,j=4; i<5; i++,j--) {
        b[i] = a[j];
    }

    for(i=0; i<5; i++) {
        printf("%d ",b[i]);
    }
    
    printf("\n\n");
    
    int n=5;

    for(i=0; i<n/2; i++) {
        int first = a[i];
        int last = a[n-i-1];

        a[i] = last;
        a[n-i-1] = first;
    }

    for(i=0; i<5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}