#include<stdio.h>

int main()
{
    char number;
    printf("Enter something: \n");
    scanf("%c", 'number');
    if(number =='f' && number =='F') {
        printf("You can sleep\n");
    } else if(number == 'f') {
        printf("Time to work\n");
    } else {
    printf("Error\n");
    }
    return 0;
}