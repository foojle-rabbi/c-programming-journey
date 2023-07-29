#include<stdio.h>

void slice(char str[], int n, int m);

int main()
{
    char string[30];
    int n,m;

    printf("Enter a string: ");
    gets(string);

    printf("Enter value of index n & m: ");
    scanf("%d %d", &n,&m);

    slice(string,n,m);
    return 0;
}

void slice(char str[], int n, int m) {
    char ch;
    
    printf("Value from index %d to %d\n", n, m);
    for(int i=n; i<=m; i++) {
        ch = str[i];
        printf("%c", ch);
    }
}