#include<stdio.h>
#include<string.h>

int main()
{
    char email[200],pass[30];
    char mail[]="rabbil.alamin";
    char pas[]="rabbil";

               printf("Enter Your E-mail :");
    scanf("%s", email);
    int x = strcmp(email,mail);
    if(x==0) {
        printf("Enter Your password: ");
        scanf("%s",pass[30]);
        int y = strcmp(pas,pass);
        if(y==0) 
            printf("Welcome Rabbil\n");
         else 
            printf("Please enter correct pass");
        
    } else {
        printf("Enter valid email ");
    }
    return 0;
}