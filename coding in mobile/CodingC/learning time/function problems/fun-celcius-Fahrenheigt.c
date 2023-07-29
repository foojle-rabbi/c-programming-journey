#include<stdio.h>

int cel2Far(int celcius);

int main()
{
    //Celcius to Fahrenheit
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("%d celcius = %d Fahrenheit", x, cel2Far(x));
    return 0;
}

int cel2Far(int celcius){
    int far;
    far = (celcius * 1.8) +32;
    
    return far;
}