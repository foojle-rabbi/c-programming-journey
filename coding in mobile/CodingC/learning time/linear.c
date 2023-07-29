#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num[] = {10, 5, 18, 20,2, 8, 43};
    bool paoua = false;
    int position, found, number,i;  
    
    printf("Enter a number to find");
    scanf("%d", &number);
    
    for(i = 0; i<7; i++){
        if(number == num[i]){
        paoua = true;
        position = i;
        }
    }
    
    if(paoua){
        printf("Number found at %d index\n", position +1);
    } else{
        printf("Number not founf\n");
    }
    return 0;
}