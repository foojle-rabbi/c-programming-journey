#include<stdio.h>

int main()
{
    char string1[] = "Fojle Rabbi";
    char string2[] = "Fojle Rabbi";
    
    int check = strcmp(string1, string2);
    
    if(check == 0)
        printf("Stringa are eqaul\n");
    else
        printf("Strings are not equal\n");    
    return 0;
}