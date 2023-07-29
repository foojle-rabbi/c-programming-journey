#include<stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main()
{
    struct Rectangle a;
    printf("Enter length & width of a rectangular:");
    scanf("%f %f", &a.length, &a.width);

    float area = a.length * a.width;
    float perimeter = 2*(a.length + a.width);

    printf("The area is :%.2f & perimeter is :%.2f", area,perimeter);
    return 0;
}