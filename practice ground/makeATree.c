#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("coudn't create node\n");
        exit(1);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* root;

void insert(int data){
    if(root == NULL){
        root = createNode(data);
        return;
    } 

    struct node* current = root;
    struct node* prev = NULL;
    //okay then its good to create a current node; what do you say
    
    while (current != NULL){
        prev = current;
        if(current->data == data){
            printf("Data exits\n");
            return;
        }else if(current->data > data){
            current = current->left;
        }else{
            current = current->right;
        }
    }

    struct node* new = createNode(data);

    if(prev->data > data){
        prev->left = new;
    }else{
        prev->right = new;
    }
}

void traversal(struct node* root){
    if(root != NULL){
        traversal(root->left);
        printf("%d ", root->data);
        traversal(root->right);
    }
}

int main()
{
    root = NULL;
    insert(10);
    insert(5);
    insert(13);
    traversal(root);
    return 0;
}