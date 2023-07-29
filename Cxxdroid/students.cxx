#include<stdio.h>

int main()
{
    FILE *file;
    int stu,i,age,phnum;
    char name[25];
    
    file = fopen("students.txt", "a");

    if(file == NULL) {
        printf("File doesn’t exists\n");
    } else {
        printf("File is opened\n");

        printf("How many students: ");
        scanf("%d", &stu);

        for(i=0; i<stu; i++) {
            printf("Enter name: ");
            fgets(name,25,stdin);
            
            printf("Enter age: ");
            scanf("%d", &age);
            
            printf("Enter Phone Number: ");
            scanf("%d", &phnum);
            printf("\n");
            
            fprintf(file,"%s        %d    %d",name,age,phnum)
        }

        fclose(file);
    }
    return 0;
}