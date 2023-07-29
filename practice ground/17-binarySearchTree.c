#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* root;

struct node* createNode(int data){
    struct node* new = (struct node*) malloc(sizeof(struct node));
    if(new == NULL){
        printf("Coudn't create node\n");
        exit(1); //what does exit one means? ask to chatgpt
    }

    new->data = data;
    new->left = NULL;
    new->right = NULL;

    return new;
}

void insert(int key){
    struct node* new = createNode(key);
    if(root == NULL){
        root = new;
        return;
    }
    struct node* prev = NULL;
    struct node* current = root;

    while(current != NULL){
        prev = current;
        if(current->data == key){
            printf("value is exits\n");
            return;
        }else if(current->data > key){
            current = current->left;
        }else{
            current = current->right;
        }
    }

    if(prev->data > key){
        prev->left = new;
    }else{
        prev->right = new;
    }
}

void inorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void searchIter(int key){
    struct node* current = root;
    while(current != NULL){
        if(current->data == key){
            printf("Item found\n");
            return;
        }else if(current->data > key){
            current = current->left;
        }else{
            current = current->right;
        }
    }

    printf("Not found\n");
    return;
}

int main()
{
    root = NULL;
    insert(55);
    insert(40);
    insert(80);
    insert(34);
    insert(28);
    insert(38);
    insert(60);
    insert(90);

    searchIter(90);

    inorder(root);
    return 0;
}