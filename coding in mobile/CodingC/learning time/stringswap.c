#include<stdio.h>

int main()
{
    char name1[]="Fojle";
    char name2[]="Rabbi";
    char temp[20];
    
    strcpy(temp,name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
    
    printf("%s\n",name1);
    printf("%s\n",name2);
    
    return 0;
}