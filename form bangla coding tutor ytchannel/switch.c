#include<stdio.h>

int main()
{
    char number;
    printf("Enter small 'f' or capital 'F': \n");
    scanf("%c", &number);
    switch (number){
    case 'f':
    printf("Time to work\n");
    break;
    case 'F':
    printf("You can sleep\n");
    break;
    default:
    printf("Error! please enter correct value");
    }
    
}