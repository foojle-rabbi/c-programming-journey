#include<stdio.h>

double triarea(double b, double h){
    return  0.5 * b * h;
};

int main()
{
    double base,height;
    
    printf("Enter triangle base and height ");
    scanf("%lf %lf", &base, &height);
    
    double result = triarea(base,height);
    
    printf("Triangle area is : %.2lf\n", result);
    return 0;
}