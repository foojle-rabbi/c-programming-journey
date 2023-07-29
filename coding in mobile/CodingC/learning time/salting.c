#include<stdio.h>

void salting(char str[]);

int main()
{
    char pass[30];

    printf("Enter a passwors: ");
    gets(pass);

    printf("Your old password: %s\n", pass);
    printf("salted password: ");
    salting(pass);



    return 0;
}

void salting(char str[]) {
    char newpass[30];
    char salt[]="12345";

    strcpy(newpass, str);
    strcat(newpass, "123");
    puts(newpass);
}