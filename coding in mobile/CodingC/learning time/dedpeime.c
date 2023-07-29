#include<stdio.h>

int main()
{
    int number,i,j;
    
    printf("Enter a deadline");
    scanf("%d", &number);
    
    int prime[1000];
    
    for(i = 2; i < number; i++){
        for(j = 1; j < i; j++){
            if(i % j == 0){
             continue;
            }else{
                prime[i];
            }
        }
    }
    
    printf("Prime number between %d: ", number);
    for(i= 1; i < number; i++){
            printf("%d ", prime[i]);
    }        
    return 0;
}