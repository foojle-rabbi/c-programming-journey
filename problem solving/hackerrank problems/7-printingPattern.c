#include<stdio.h> 

int main() {
    int n,i,j;
    scanf("%d", &n);

    for(i = n; i >= 1; i--){
        
        for(j = n; j>i; j--)
        printf("%d ", j);
        
        for(j = 1; j <= 2*i - 1; j++)
        printf("%d ", i);
        
        for(j = i+1; j<=n; j++)
        printf("%d ", j);
        printf("\n");
    }

    for(i = 1; i<n; i++){
        
        for(j = n; j > i; j--)
        printf("%d ", j);
        printf("\n");
    }
    
    return 0;
}

//  4 4 4 4 4 4 4
//  4 3 3 3 3 3 4
//  4 3 2 2 2 3 4
//  4 3 2 1 2 3 4
//  4 3 2 2 2 3 4
//  4 3 3 3 3 3 4
//  4 4 4 4 4 4 4
