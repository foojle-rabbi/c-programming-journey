#include<stdio.h>

int main()
{
    char name[] = "Fojle Rabbi";
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
    
    
    //for(i=lenth; i>=0; i--){
    //    printf("%d\n", i);
    //}
    return 0;
    
}