#include<stdio.h>

struct person{
    char name[25];
    int age;
    char add[30];
};

void inputDetails(struct person *p);
void outputDetails(struct person o);

int main()
{
    int n,i;
    printf("Enter the number of person");
    scanf("%d", &n);
    getchar();
    
    struct person per[n];
    
    for(i=0; i<n; i++)
    inputDetails(&per[i]);
    printf("\n");
    
    
    for(i=0; i<n; i++)
    outputDetails(per[i]);
    printf("\n");
    
    return 0;
}

void inputDetails(struct person *p){
    printf("Enter Details for person\n");
    printf("Name : ");
    fgets(p->name, 25,stdin);
    
    printf("Age :");
    scanf("%d", &(*p).age);
    getchar();
    printf("Address : ");
    fgets((*p).add, 30,stdin);
    
}

void outputDetails(struct person o){
    printf("Name : %s", o.name);
    printf("Age : %d\n", o.age);
    printf("Address : %s\n", o.add);
}










