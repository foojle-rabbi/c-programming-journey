#include<stdio.h>
#include<unistd.h>
#include<conio.h>

int main()
{
    int hour,min,sec;
    int somoy=60;

    printf("Enter hour min and sec\n");
    scanf("%d %d %d",&hour,&min,&sec);
    clrscr();

    int h=0,m=0,s=0;
    while(1) {
        printf("\n\n####### Stop Watch ########\n\n\n");
        printf("          %.2d:%.2d:%.2d",h,m,s);
        printf("\n\n\n###########################\n\n\n");
        if(h==hour && m==min && s==sec) {
            break;
        } else {
            clrscr();
        }
        s++;
        sleep(1);
        if(s==somoy) {
            m++;
            s=0;
        }
        if(m==somoy) {
            h++;
            m=0;
        }
    }

    return 0;
}