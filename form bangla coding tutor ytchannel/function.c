#include <stdio.h>

float plus(float a, float b) {
    float sum=a+b;
    return sum;
}
float minus(float a, float b) {
    float sum=a-b;
    return sum;
}
float gun(float a, float b) {
    float sum=a*b;
    return sum;
}
float vag(float a, float b) {
    float sum=a/b;
    return sum;
}
int main() {
    float a,b;
    printf("Enter the 1st number");
    scanf("%f", &a);
    printf("Enter the 2nd number");
    scanf("%f", &b);
    
    float resultp=plus(a,b);
    printf("The result of plus %.3f\n", resultp );
    
    float resultm=minus(a,b);
    printf("The result of minus %.3f\n", resultm );
    
    float resultg=gun(a,b);
    printf("The result of gun %.3f\n", resultg );
    
    float resultv=vag(a,b);
    printf("The result of vag %.3f\n", resultv );
    
    return 0;
}