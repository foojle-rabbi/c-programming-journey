#include<stdio.h>

int main()
{
    //String copy
    char str1[20] = "Fojle",str2[20];
    
    printf("String 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);
    
    strcpy(str2,str1);
    
    printf("After copy\n\nString 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);
    return 0;
}