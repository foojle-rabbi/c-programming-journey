#include <stdio.h>
int main()
{
    int a[3][3],row,col,average=0;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d", &a[row][col]);
        }
    }
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%d ", a[row][col]);
            average=average + a[row][col];
        }
        printf("\n");
    }
    float sum=average/9.0;
    printf("%f", sum);
    return 0;
}
    