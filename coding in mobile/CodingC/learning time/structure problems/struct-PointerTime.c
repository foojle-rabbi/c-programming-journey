#include<stdio.h>

typedef struct {
    int hour;
    int min;
    int sec;
} time;

void initializeTime(time *t);

int main()
{
    time t1,t2,result;
    printf("Enter hour minute and second for first time");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);

    initializeTime(&t1);
    printf("%d %d %d\n", t1.hour, t1.min, t1.sec);
    return 0;
}

void initializeTime(time *t) {

    while(t->sec >= 60) {
        t->min++;
        t->sec -= 60;
    }
    while(t->min >= 60) {
        (*t).hour++;
        (*t).min -= 60;
    }
}