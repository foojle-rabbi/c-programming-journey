#include<stdio.h>

int main()
{
    double celcius, fahrenheit;
    
    printf("Enter celcius: ");
    scanf("%lf", &celcius);
    
    fahrenheit = (1.8 * celcius) + 32;
    
    printf("%.2lf celcius = %.2lf Fahrenheit\n", celcius, fahrenheit);
    return 0;
}