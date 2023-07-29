#include<stdio.h>

void array(int num[], int n) {
    
    int i,max = num[0];
    for(i=0; i<n; i++) {
        if(num[0] > num[i])
        max = num[i];
    }
    
    printf("Minimum : %d\n", max);
};

int main()
{
    int n;
    printf("How many number you want ");
    scanf("%d", &n);
    int i,num[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    
    array(num, n);
    return 0;
}