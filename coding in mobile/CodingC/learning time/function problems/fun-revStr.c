#include<stdio.h>

void reverseString(char string[]);

int main()
{
    char *name;
    
    printf("Enter a string: ");
    fgets(name,30,stdin);
    
    reverseString(name);
    return 0;
}

void reverseString(char string[]) {
    int length;
    length = strlen(string);
    int i=0;
    char reverse[length];
    int j=length-1;

    for(i=0; i<length; i++) {
        reverse[i] = string[j];
        j--;
    }

    puts(reverse);
}