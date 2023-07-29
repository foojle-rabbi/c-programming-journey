#include<stdio.h>

void xtoy(double a, double b){
    int i = 1;
    double result = 1;
    
    for(i=1;i<=b; i++){
    result *= a;
    } 
    
    printf("Result is %.2lf\n", result);

}

int main()
{
    double base,exp;
    
    printf("Enter base and exponent ");
    scanf("%lf %lf", &base, &exp);
    
    xtoy(base,exp);
    return 0;
}