#include<stdio.h>

int main()
{
    //string lenth
    char string[]="My name is Fojle";
    int i = 0, lenth = 0; 
    while(string[i] != '\0'){
        i++;
        lenth++;
        
    }
    
    printf("Lenth is : %d\n", lenth);
    
    
    
    return 0;
}