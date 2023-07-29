#include<stdio.h>

int main()
{
    int var;
    int new;
    for(new=1; new<=5; new++) {
        for(var=1; var<=new; var++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}