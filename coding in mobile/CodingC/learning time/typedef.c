#include<stdio.h>

typedef struct student{
    char *name;
    int roll;
    int age;

} stu;

int main()
{
    struct student s1;
    
    s1.name = "Fojle Rabbi";
    s1.roll = 1152;
    s1.age = 19;
    
    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student age: %d\n", s1.age);
    
    //by using typedef struct student's short from " stu"
    stu s2;
    
    s2.name = "Al esman";
    s2.roll = 1151;
    s2.age = 19;
    
    printf("Student name: %s\n", s2.name);
    printf("Student roll: %d\n", s2.roll);
    printf("Student age: %d\n", s2.age);
    return 0;
}