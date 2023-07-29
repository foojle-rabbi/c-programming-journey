#include<stdio.h>

int main()
{
    char name[] = "madam";
    char reverse[20];
    int j=0,i = 0, lenth = 0;
    while(name[i] != '\0') {
        i++;
        lenth++;
    }

    printf("Lenth is : %d\n", lenth);
    
    
    for(i = lenth-1; i>=0; i--){
        reverse[j] = name[i];
        j++;
    }
    
    printf("Reverse string : %s\n", reverse);
    
    int check = strcmp(name, reverse);
    
    if(check==0){
        printf("Strings are palindrome\n");
    }else{
        printf("Strings are not palindrome\n");
    }
    //for(i=lenth; i>=0; i--){
    //    printf("%d\n", i);
    //}
    return 0;
    
}