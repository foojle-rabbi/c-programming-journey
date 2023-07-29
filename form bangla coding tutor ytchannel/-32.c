#include<stdio.h>

int main()
{
    int i, N;
    printf("Put an value of N\n");
    scanf("%d", &N);
    if(N==-1){
    printf("error");
    }else {
    for(i=1; i>=-32; i--) {
            printf("%d\n", i);
        }
     }   
    return 0;
}