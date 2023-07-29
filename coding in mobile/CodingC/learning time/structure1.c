#include<stdio.h>

struct custom{
    char name[25];
    int age;
    float salary;
};

int main()
{
    struct custom person;
    
    //person.name[25]="Fojle rabbi";
    //strcpy(person.name,"Fojle Rabbi");
    person.age=19;
    person.salary=8000;
    
    printf("Name : %s\n", person.name);
    printf("Age : %d\n", person.age);
    printf("salary : %.2f\n", person.salary);
    
    
    return 0;
}