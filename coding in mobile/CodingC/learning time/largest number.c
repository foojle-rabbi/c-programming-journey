#include<stdio.h>

int main()
{
    int num1, num2, num3, check;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1 > num2 && num1 > num3){
        check = num1;
    } else if(num2 > num1 && num2 > num3){
        check = num2;
    }else {
        check =num3;
    }
    
    printf("%d is largest", check);
    return 0;
}