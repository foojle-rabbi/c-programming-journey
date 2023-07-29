#include<stdio.h> 

int main()
{
    freopen("1input.txt", "r", stdin);

    char name[30];
    fgets("name", 30, stdin);
    printf("%s\n", name);
    return 0;
}