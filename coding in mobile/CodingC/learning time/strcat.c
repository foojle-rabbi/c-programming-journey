#include<stdio.h>

int main()
{
    //String contactinaction 
    char str1[20] = "Fojle ",str2[20] = "Rabbi";
    
    printf("String 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);
    
    strcat(str1, str2);
    
    printf("\nAfter concat\n\nString 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);
    return 0;
} 