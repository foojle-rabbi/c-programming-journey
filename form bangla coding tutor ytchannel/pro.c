#include<stdio.h>

int main()
{
    int no,;
    printf("Enter meter No.:");
    scanf("%d", &no);
    
    printf("Enter your Unit:\n");
    scanf("%d", &unit);
    
    printf("Meter vat: 30 tk");
    printf("Others : 15 tk");
    printf("If pay at right time, The amount of bill is : %d tk");
    printf("If");
    
    
    switch(no){
    case 1:
    printf("Name : Mahfuzul Haque \nFather's Name : Shahidul Alam\n Mother's Name : Parvin Akter\n");
    case 2:
    printf("Name : Rashedul Khan \nFather's Name : Mahfuzul Alam\n Mother's Name : Amena Akter\n");
    case 3:
    printf("Name : Rakibul Hasan \nFather's Name : Fazlul Haque\n Mother's Name : Ayesha Akter\n");
    }
    return 0;
}