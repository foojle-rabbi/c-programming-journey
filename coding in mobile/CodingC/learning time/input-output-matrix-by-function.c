#include<stdio.h>

void input(int a[2][3], int r, int c);
void output(int a[2][3], int r, int c);

int main()
{
   
    int num[2][3];
    int num2[2][3];
    
    
    input(num,2,3);
    input(num2,2,3); 
    
    output(num,2,3);
    output(num2,2,3);
    
    
    
    
    
     /*int a[2][3];
    int row=2;
    int col=3,i,j;

    for(i=0; i<row; i++) {

        for(j=0; j<col; j++) {
            printf("Enter a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Value of a matrix\n");
    for(i=0; i<row; i++) {

        for(j=0; j<col; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } */
    return 0;
}

void input(int a[2][3], int r, int c){
    int i,j;
    
    for(i=0; i<r; i++) {

        for(j=0; j<c; j++) {
            printf("Enter a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}


void output(int a[2][3], int r, int c){
    int i,j;
    
    for(i=0; i<r; i++) {

        for(j=0; j<c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}