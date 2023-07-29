#include<stdio.h>

float circleArea(int radius);

int main()
{
    float r;
    
    printf("Enter a circle radius: ");
    scanf("%f", &r);
    
    printf("area %.2f\n", circleArea(r));
    return 0;
}

float circleArea(int radius){
    float area = 3.14 *radius*radius;
    
    return area;
}