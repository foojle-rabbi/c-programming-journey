#include<stdio.h>

int main()
{

    int i,number, divisors[1000];
    char num = 'c';

    while(num != 'c'){
    
    
    }
 



printf("Enter a Number: ");
    scanf("%d", &number);

    for(i=1; i <=number; i++) {
        if(number % i== 0) {
            divisors[i] = i;
            
            }
    }
    printf("the divisors are: ");

    for(i=1; i <=number; i++) {
        
       if(divisors[i]!=0){
        printf("%d ", divisors[i]);
        }
    }


    return 0;
}