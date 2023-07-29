#include<stdio.h>
int main()
{
    int unit;
    float price, price1, price2;
    
        printf("Enter your unit: \n");
        scanf("%d", &unit);
        if(unit < 76) {
            price = unit * 4.19;
        } else if(unit >75) {
            price1= 75 * 4.19;
            unit = unit - 75;
            price2 = unit * 5.72;
            price = price1 + price2;
        } else {

        }
        printf("your current bill is: %.2f taka\n", price);
        return 0;
    }