#include<stdio.h>

int main()
{
    int row1,row2,col1,col2,i,j,firstMatrix[10][10], secondMatrix[10][10];

    printf("Enter first matrix number of rows and columns: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter second matrix number of rows and columns: ");
    scanf("%d %d", &row2, &col2);

    while(col1 != row2) {
        printf("\nError\nmatrix row and column must be same\n");

        printf("\nEnter first matrix number of rows and columns: ");
        scanf("%d %d", &row1, &col1);

        printf("Enter second matrix number of rows and columns: ");
        scanf("%d %d", &row2, &col2);
    }


    //taking value of first matrix
    printf("\nEnter elements of first matrix\n");
    for(i=0; i<row1; i++) {
        for(j=0; j<col1; j++) {

            printf("First [%d][%d] = ", i,j);
            scanf("%d", &firstMatrix[i][j]);
        }
        printf("\n");
    }


    //taking value of second matrix
    printf("\nEnter elements of second matrix\n");
    for(i=0; i<row2; i++) {
        for(j=0; j<col2; j++) {

            printf("Second [%d][%d] = ", i,j);
            scanf("%d", &secondMatrix[i][j]);
        }
        printf("\n");
    }

    //printing first matrix.
    printf("\nvalue of first matrix\n");
    for(i=0; i<row1; i++) {
        for(j=0; j<col1; j++) {

            printf("\t%d ", firstMatrix[i][j] );
        }
        printf("\n");
    }

    //printing second matrix.
    printf("\nvalue of second matrix\n");
    for(i=0; i<row2; i++) {
        for(j=0; j<col2; j++) {

            printf("\t%d ", secondMatrix[i][j] );
        }
        printf("\n");
    }

    return 0;
}