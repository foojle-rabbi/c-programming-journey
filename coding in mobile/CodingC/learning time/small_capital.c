#include<stdio.h>

int main()
{
    char letter;
    
    printf("Enter a character");
    scanf("%c", &letter);
    
    if(letter >= 65 && letter < 97){
        printf("Is a Capital letter\n");
    }else if(letter >= 97 && letter <= 123){
        printf("Is a small leter\n");
    } else{
        printf("Special character\n");  
    }
    return 0;
}