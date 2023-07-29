#include<stdio.h> 

int main() {
    int a, b, i;
    char *arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d %d", &a, &b);

    for (i = a; i <=b; i++){
        if (i <=9)
        {
            printf("%s\n", arr[i-1]);
        }
        else{
            if(i % 2 == 0){
                printf("%s\n", "even");
            }else{
                printf("%s\n", "odd");
            }
        }
        
    }

        return 0;
}