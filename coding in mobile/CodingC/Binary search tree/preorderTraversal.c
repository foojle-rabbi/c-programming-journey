#include<stdio.h>

typedef struct node Node;
struct node {
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data) {
    Node* newNode;
    newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preorder(Node *root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node *p,*p1,*p2,*p3,*p4;
    p = createNode(4);
    p1 = createNode(1);
    p2 = createNode(6);
    p3 = createNode(5);
    p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);

    return 0;
}