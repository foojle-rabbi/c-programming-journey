#include<stdio.h>

int main()
{
    int range, fibo, first = 0, second = 1, count = 0;
    
    printf("Enter a range : ");
    scanf("%d", &range);
    
    while(count < range){
        
        if(count <= 1){
           fibo = count;
        } else {
        
        fibo = first + second;
        first = second;
        second = fibo;
        }
        
        printf("%d ", fibo);
        count ++; 
    
    }
    return 0;
}