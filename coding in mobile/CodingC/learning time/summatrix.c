#include<stdio.h>

int main()
{
    //2D array
    int i,j, row = 3, col = 4;

    int A[3][4]= {
        {1,2,3,4},
        {11,12,13,14},
        {21, 22, 23,24}

    };

    int B[3][4]= {
        {1,2,3,4},
        {11,12,13,14},
        {21, 22, 23,24}

    };
    
    int sum[3][4];

    printf("A = ");
    for(i=0; i<row; i++) {

        for(j=0; j<col; j++) {

            printf("\t%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nB = ");
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("\t%d", B[i][j]);
        }

        printf("\n");
    }

    //Summation of A + B matrix
    
    
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
          sum[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("\n\nA + B = \n");

    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("\t%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}