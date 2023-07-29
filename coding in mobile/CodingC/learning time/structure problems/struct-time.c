#include<stdio.h>

struct time {
    int hour;
    int min;
    int sec;
};

int main()
{
    //add two time
    struct time t1,t2,t3;

    printf("Enter hour minute and second for first time;");
    scanf("%d %d %d", &t1.hour,&t1.min,&t1.sec);
    if(t1.min >= 60 || t1.sec >= 60) {
        printf("min & sec cannot be exeed 60\n");
        printf("Enter hour minute and second for first time;");
        scanf("%d %d %d", &t1.hour,&t1.min,&t1.sec);
    }

    printf("Enter hour minute and second for second time;");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);
    if(t2.min >= 60 || t2.sec >= 60) {
        printf("min & sec can not exceed 60\n");
        printf("Enter hour minute and second for first time;");
        scanf("%d %d %d", &t1.hour,&t1.min,&t1.sec);
    }

    t3.hour = 0;
    t3.hour = t1.hour + t2.hour;
    t3.min = t1.min + t2.min;
    t3.sec = t1.sec + t2.sec;

    while(t3.min > 60 && t3.sec > 60) {
        if(t3.sec >= 60) {
            t3.sec = t3.sec - 60;
            t3.min++;

        }
        if(t3.min >=60) {
            t3.min = t3.min - 60;
            t3.hour++;
        }
    }

    printf("%d hr %d min %d sec\n", t3.hour, t3.min, t3.sec);
    return 0;
}