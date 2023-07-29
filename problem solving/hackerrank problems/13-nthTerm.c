#include<stdio.h> 

int find_nth_term(int n, int a, int b, int c){
    if(n ==1)
    return a;
    if(n == 2)
    return b;
    if(n == 3)
    return c;
    
    return find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c); 
}

//another solution for nth term
int nthTerm(int n, int a, int b, int c){
    int sum = a + b + c;
    
    if(n > 4){
        sum = nthTerm(n-1, b, c, sum);
    }

    return sum;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int sum = nthTerm(n, a, b, c);
    printf("%d\n", sum);
    
    return 0;
}