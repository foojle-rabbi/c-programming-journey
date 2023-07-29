#include<stdio.h>

typedef struct node node;
struct node {
    int data;
    node *left;
    node *right;
};

node *createNode(int data) {
    node *new;
    new = (node*) malloc(sizeof(node));
    if(new == NULL) {
        printf("Memory error!\n");
    }
    new->data = data;
    new->left = NULL;
    new->right = NULL;

    return new;
}

void inorderTraversal(node * root) {
    if(root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

node* search(node* root, int key) {
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

int main()
{
    //root node
    node *root = createNode(7);

    //lever - 1
    node *p1 = createNode(5);
    node *p2 = createNode(9);

    //level - 2
    node *p3 = createNode(3);
    node *p4 = createNode(6);
    node *p5 = createNode(8);
    node *p6 = createNode(11);

    //connecting left nodes
    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    inorderTraversal(root);
    printf("\n");

    node *n = search(root,0);
    if(n==NULL) {
        printf("Not found\n");
    } else {
        printf("found %d\n", n->data);
    }

    return 0;
};