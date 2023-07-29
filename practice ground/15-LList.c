#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node* head; //globaly variable i mean head pointer declare korar por o keno head er value change hoy na?
                    //i should have to ask gpt for the answere

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Couldnt create node\n");
        exit(1);
    }

    newNode->data = data; 
    newNode->next = NULL;

    return newNode;
}

void display(struct node* head){
    if(head == NULL){
        printf("Empty list\n");
        return;
    }
    printf("Elements of linked list: ");
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void insertAtFirst(struct node* head, int data){
    struct node* new = createNode(data);
    new = head;
    head = new;
}

int main()
{
   // struct node* head = NULL; 
   //first e to ami local variable declare korchilam but hoy nai tarpor globaly korlam tarpor o hoitache na!
    head = NULL;
    insertAtFirst(head, 28);
    display(head);
    return 0;
}