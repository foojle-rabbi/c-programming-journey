#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Coudn't create node\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//traversals
void inorderTraversal(struct node *root){
    if(root != NULL){
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(struct node* root){
    if(root != NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void preorderTraversal(struct node *root){
    if(root != NULL){
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

struct node* searchRecursive(struct node *root, int key){
    if(root != NULL){
        if(root->data == key){
            return root;
        }else if(root->data > key){
            return searchRecursive(root->left, key);
        }else{
            return searchRecursive(root->right, key);
        }
    }

    return NULL;
}

struct node *searchIter(struct node* root, int key){
    while(root != NULL){
        if(root->data == key){
            return root;
        }else if(root->data > key){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return NULL;
}

void insertInBst(struct node *root, int data){
    struct node* prev = NULL;
    while(root != NULL){
        prev = root;
        if(root->data == data){
            printf("%d is exists\n", data);
            return;
        }else if(root->data > data){
            root = root->left;
        }else{
            root = root->right;
        }
    }

    struct node *newNode = createNode(data);
    if(prev->data > data){
        prev->left = newNode;
    }else{
        prev->right = newNode;
    }
}

int main() {
    struct node *root = createNode(8);
    struct node* p1 = createNode(6);
    struct node* p2 = createNode(10);
    struct node* p3 = createNode(4);
    struct node* p4 = createNode(7);
    struct node* p5 = createNode(15);
    
    //linking each other
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->right = p5;

    inorderTraversal(root);
    printf("\n");
    // postorderTraversal(root);
    // printf("\n");
    // preorderTraversal(root);
    // printf("\n");

    // struct node *n = searchIter(root, 15);
    // if(n == NULL){
    //     printf("Item is not found\n");
    // }else{
    //     printf("%d is found\n", n->data);
    // }

    insertInBst(root, 5);
    insertInBst(root, 6);
    insertInBst(root, 9);
    inorderTraversal(root);

    /*
        there are also have some function or operations that i dont know like,
        1. quick sort
        2. isBst
        3. Deletion in binary search tree

        okay no problem i will learn them all inshaa-Allah.
    */


    return 0;
}