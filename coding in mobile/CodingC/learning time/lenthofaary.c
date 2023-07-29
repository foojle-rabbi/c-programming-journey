#include<stdio.h>

int main()
{
    int num[] = {1,2,3,4,10,20,30,40,50};
    
    int lenth = sizeof(num) / sizeof(num[0]);
    
    printf("There are %d numbers is the array\n", lenth);
    return 0;
}