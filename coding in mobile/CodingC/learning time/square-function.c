#include<stdio.h>

double square(n){
    return n*n;
}

int main()
{
    double n;
    
    printf("Enter a value to square: ");
    scanf("%lf", &n);
    
    double result = square(n);
    
    printf("%.2lf square = %.2lf\n", n,result);
    return 0;
}