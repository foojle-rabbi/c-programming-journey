#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main()
{
    struct date s1,s2;

    printf("Enter Day Month & year: ");
    scanf("%d %d %d", &s1.day, &s1.month, &s1.year);

    printf("Enter Day Month & year: ");
    scanf("%d %d %d", &s2.day, &s2.month, &s2.year);
    printf("\n");

    if(s1.year<s2.year) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s1.day,s1.month,s1.year);
    } else if(s2.year<s1.year) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s2.day,s2.month,s2.year);
    } else if(s1.month<s2.month) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s1.day,s1.month,s1.year);
    } else if(s2.month<s1.month) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s2.day,s2.month,s2.year);
    } else if(s1.day<s2.day) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s1.day,s1.month,s1.year);
    } else if(s2.day<s1.day) {
        printf("First comes\n");
        printf("%d / %d / %d\n", s2.day,s2.month,s2.year);
    } else {
        printf("Both are equal\n");
    }
    return 0;
}