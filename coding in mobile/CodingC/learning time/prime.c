#include<stdio.h>

int main()
{
   
     int number,i,prime=1;
    printf("Enter a Number: ");
    scanf("%d", &number);
    
    for(i=2; i<number; i++){
        if(number % i== 0){
        prime = 0;
        break;
        }
   
    }
    
    if(prime){
        printf("%d is a prime number ", number);
    } else{
    printf("%d is not a prime number ", number);
    }
    return 0;
}