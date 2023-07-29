#include<stdio.h>

int main()
{
    //merge two arrays
    int a[10]= {1,2,3,4,5};
    int b[]= {6,7,8,9,10};
    int merge[10],i,j;

    for(j=0,i=5; i<10; i++,j++) {
        a[i] = b[j];
    }

    printf("After merging: ");
    for(i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}