#include<stdio.h>
int main()
{
    int unit;
    float price, price1, price2, price3;
    printf("Enter your unit: \n");
    scanf("%d", &unit);
    if(unit < 76) {
        price = unit * 4.19;
    } else if(unit > 75 && unit <= 200) {
        price1= 75 * 4.19;
        unit = unit - 75;
        price2 = unit * 5.72;
        price = price1 + price2;
    } else if(unit > 200) {
        price1 = 1029.25;
        unit = unit - 200;
        price3 = unit * 7.23;
        price = price1 + price3;
    }
    printf("your current bill is: %.2f taka\n", price);
    return 0;
}