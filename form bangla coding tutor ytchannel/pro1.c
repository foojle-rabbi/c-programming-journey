#include<stdio.h>

int main()
{
    int no,unit;
    float price1,price2,price;
    printf("Enter meter No. :");
    scanf("%d", &no);
    
    printf("Enter your Unit:");
    scanf("%d", &unit);
    printf("\n");
    printf("\n");
    
    switch(no){
    case 1:
    printf("Name:Mahfuzul Haque\nFather's Name:Shahidul Alam\nMother's Name:Parvin Akter\n");
    break;
    case 2:
    printf("Name:Rashedul Khan\nFather's Name:Mahfuzul Alam\nMother's Name:Amena Akter\n");
    break;
    case 3:
    printf("Name:Rakibul Hasan\nFather's Name:Fazlul Haque\nMother's Name:Ayesha Akter\n");
    break;
    }
    if(unit < 76) {
        price = unit * 4.19;
    } else if(unit > 75 && unit < 201) {
        price1= 75 * 4.19;
        unit = unit - 75;
        price2 = unit * 5.72;
        price = price1 + price2;
    }
    printf("Meter vat: 30 tk\n");
    printf("Others : 15 tk\n");
    printf("If pay at right time,\nThe amount of bill is : %.2f tk\n",(price+45));
    printf("If"); 
    return 0;
}