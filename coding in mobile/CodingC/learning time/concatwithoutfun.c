#include<stdio.h>

int main()
{
    //String contactinaction without libraray function
    char str1[20] = "Fojle ",str2[20] = "Rabbi";
    
    int i,lenth,j,lenth2;
    j=lenth2=i=lenth=0;
    printf("String 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);
    
    
    /*strcat(str1, str2);
    
    printf("\nAfter concat\n\nString 1 = %s\n", str1);
    printf("String 2 = %s\n", str2);*/
    
    while(str1[i] != '\0'){
        lenth++;
        i++;
    }
    
    
    //concat
    while(str2[j] != '\0'){
        lenth2++;
        j++;
    }
    
    for(int k = 0; k<=0; )
    return 0;
} 