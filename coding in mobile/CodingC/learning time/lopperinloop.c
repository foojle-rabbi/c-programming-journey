#include<stdio.h>

int main()
{
    int number, i;

    printf("Give the number: ");
    scanf("%d", &number);

    for(i=0; i< number; i++) {

        printf("i am i loop\n");

        for(int j = 0; j < 5; j++) {
            printf("\ti am j loop\n");

            for(int k = 0; k < 2; k++) {
                printf("\t iam k loop\n");
            }
        }

    }

    return 0;
}