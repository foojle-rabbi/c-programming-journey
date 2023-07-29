#include<stdio.h>

int main()
{
    FILE *first;
    first=fopen("my_file.txt","a+");
    
    int i;
    for(i=65;i<91;i++){
        fputc(i, first);
    }
    
    
    fclose(first);
    return 0;
}