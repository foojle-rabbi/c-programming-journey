#include<stdio.h>
int main() {
    int max, i, ef[8]= {-123, 134, 543, 432, -765, 653, -863};
    max=1;
    for(i=0; i<=6; i++) {
        if(ef[i] > max)
            max = ef[i];
    }
    printf("max value is = %d", max);
    return 0;
}n