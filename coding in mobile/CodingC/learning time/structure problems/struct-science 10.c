#include<stdio.h>

struct student {
    char name[25];
    int roll;
    char group[15];
    char optional[15];
};

void input(struct student *sci);
void output(struct student s);

int main()
{
    struct student science[5];
    
    FILE *file;
    
    input(&science[0]);
    output(science[0]);
    
    file = fopen("science.txt", "w");
    
    fprintf(file,"%s\n", science[0].name);
    
    fclose(file);
    return 0;
}

//function for input Details
void input(struct student *sci) {
    printf("Enter details:\n");
    printf("Student's Name: ");
    fgets(sci->name,25,stdin);

    printf("Roll: ");
    scanf("%d", &sci->roll);
    getchar();

    printf("Group : ");
    fgets(sci->group, 15, stdin);

    printf("Optional subject : ");
    fgets(sci->optional,15,stdin);
}
//function for outputting details
void output(struct student s) {
    printf("\n");
    printf("Details \n");
    printf("Name : %s", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Group : %s", s.group);
    printf("Optional Subject : %s", s.optional);
}
