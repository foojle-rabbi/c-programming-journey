#include<stdio.h>

int main()
{
    int firstnumber, lastnumber, i, n;
    
    printf("Entet fist number: ");
    scanf("%d", &firstnumber);
    
    printf("Entet last number: ");
    scanf("%d", &lastnumber);
    
    
    
    for(i=firstnumber; i<= lastnumber; i++){
        if(i % 2 != 0){
            n++;
        }
    }
    
    printf("There are %d bijor number\n", n);
    
    printf("Their Summation : %d", n*n);
    return 0;
}
