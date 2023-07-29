#include<stdio.h>

struct test{
    int id;
    float gpa;
    char name[20];
}s;
int main()
{
    
    printf("Enter your id: ");
    scanf("%d", &s.id);
    printf("Enter your Gpa: ");
    scanf("%f", &s.gpa);
    printf("Enter your Name: ");
    scanf("%s", &s.name);
    
    printf("Name: %s Id: %d Gpa: %.2f",s.name,s.id,s.gpa);
    return 0;
}