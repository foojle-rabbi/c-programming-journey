#include<stdio.h> 
#include<stdlib.h>

//complete the following function.
int marks_summation(int* marks, int number_of_students, char gender){
    int i, sum = 0;

    if(gender == 'b'){
        for(i = 0; i < number_of_students; i += 2){
            sum = sum + marks[i];
        }
    }else{
        for(i = 1; i <number_of_students; i += 2)
        sum = sum + marks[i];
    }

    return sum;
}

int main() {
    int n;
    char c;
    scanf("%d", &n);
    int *marks = (int*) malloc(n * sizeof(int));

    for(int i=0; i < n; i++){
        scanf("%d", &marks[i]);
    }

    //fflush(stdin);

    scanf(" %c", &c);
   // fflush(stdin);
    printf("%d\n", marks_summation(marks, n, c));
    
    return 0;
}