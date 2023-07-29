#include<stdio.h>

typedef struct node node;
struct node {
    int data;
    node *left;
    node *right;
};

node *createNode(int data) {
    node *newNode=(node*) malloc(sizeof(node));
    if(newNode == NULL) {
        printf("Memory error!\n");
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void inorderTraversal(node* root) {
    if(root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

node *search(node *root, int key) {
    if(root != NULL) {
        if(root->data == key) {
            return root;
        } else if(root->data > key) {
            return search(root->left, key);
        } else {
            return search(root->right, key);
        }
    }
    return NULL;
}

node *searchIter(node *root, int key) {
    while(root != NULL) {
        if(root->data == key) {
            return root;
        } else if(root->data > key) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return NULL;
}

void insert(node *root, int key) {
    node *prev = NULL;
    while(root != NULL) {
        prev = root;
        if(root->data == key) {
            printf("Element exists\n");
            return;
        } else if(root->data > key) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    node* new = createNode(key);
    if(prev->data > key) {
        prev->left = new;
    } else {
        prev->right = new;
    }
}

int main()
{
    node *root = createNode(5);
    node* p1 = createNode(3);
    node* p2 = createNode(6);
    node* p3 = createNode(2);
    node* p4 = createNode(4);
    node* p6 = createNode(9);

    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;
    p2->right = p6;

    inorderTraversal(root);
    printf("\n");
    node *n = searchIter(root, 9);

    if(n==NULL) {
        printf("Not found\n");
    } else {
        printf("found : %d\n", n->data);
    }

    insert(root, 7);

    printf("%d\n", root->right->right->left->data);
    return 0;
}











    