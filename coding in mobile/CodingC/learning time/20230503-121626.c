#include<stdio.h>

int main()
{
    char name[] = "Hello";
    
    printf("Name : %s\n", name);
    
    strrev(name);
    
    printf("After reverse Name : %s\n", name);
    return 0;
}