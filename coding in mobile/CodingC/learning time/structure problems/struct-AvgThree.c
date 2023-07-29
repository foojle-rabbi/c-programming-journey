#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    int physics;
    int chemistry;
    int math;
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Fojle Rabbi");
    s1.roll = 1152;
    s1.physics = 88;
    s1.chemistry = 83;
    s1.math= 92;
    
    float avg = (s1.physics + s1.chemistry + s1.math) / 3;
    
    printf("Average of %s in three sub is: %.2f\n", s1.name,avg);
    return 0;
}