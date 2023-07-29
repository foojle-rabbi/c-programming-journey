#include<stdio.h>

struct employee {
    char name[20];
    int empID;
    float salary;
};

int main()
{
    int num,i;
    printf("Enter How many employee: ");
    scanf("%d", &num);
    printf("\n");
    struct employee emp[num];

    for(i=0; i<num; i++) {
        printf("Enter %d employee details\n",i+1);
        getchar();

        printf("Enter name: ");
        fgets(emp[i].name, 20, stdin);

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Enter employee slary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    //Dont know how to solve this 

    float j=0,maxSalary = emp[0].salary;
    for(i=0; i<num; i++) {
        if(maxSalary < emp[i].salary) {
            printf("Highest salary employee details:\n");
            printf("Name : %s\n", emp[i].name);
            printf("Employee ID : %d\n", emp[i].empID);
            printf("salary : %.2f\n", emp[i].salary);
            j = i;
        }
    }
    printf("Max salary %f\n", maxSalary);
    printf("%d person\n", j);
 
    /*
    printf("Highest salary employee details:\n");
    printf("Name : %s\n", emp[j].name);
    printf("Employee ID : %d\n", emp[j].empID);
    printf("salary : %.2f\n", emp[j].salary);
    */
    return 0;
}