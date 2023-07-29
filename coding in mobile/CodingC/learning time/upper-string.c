#include<stdio.h>

int main()
{
    char str[20];
    char chr;
    int i=0;
    
    printf("Enter a string: ");
    gets(str);
    
    while(str[i]!='\0') {
        
        chr = str[i];
        
        if(chr>='A' && chr <='Z') {
            chr = chr+32;
            str[i]= chr;
        }
        
        i++;
    }

    printf("Lowercase %s\n", str);


    return 0;
}