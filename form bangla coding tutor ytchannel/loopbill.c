#include<stdio.h>
int main() {
  int unit,
  i;
  float price,
  price1,
  price2;
  for(i = 1; i < 25; i++) {
    printf("Enter your unit: \n");
    scanf("%d", &unit);
    if(unit < 76) {
      price = unit * 4.19;
    } else if(unit > 75) {
      price1 = 75 * 4.19;
      unit = unit - 75;
      price2 = unit * 5.72;
      price = price1 + price2;
    }
    printf("your current bill is: %.2f Taka\n", price);
    printf("\n");
  }
  return 0;
}