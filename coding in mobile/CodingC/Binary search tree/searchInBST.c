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

void postorderTraversal(Node *root) {
    if(root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void inorderTraversal(Node *root) {
    if(root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

Node * search(Node *root, int key) {
    if(root == NULL) {
        return NULL;
    } else if(root->data == key) {
        return root;
    } else if(root->data > key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }

}

int main()
{
    Node *root,*p1,*p2,*p3,*p4;
    root = createNode(6);
    p1 = createNode(4);
    p2 = createNode(7);
    p3 = createNode(2);
    p4 = createNode(5);

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    //postorderTraversal(root);
    inorderTraversal(root);
    
    printf("\n");
    
    Node *n = search(root, 7);
    if(n != NULL) {
        printf("found %d\n", n->data);
    } else {
        printf("Not found\n");
    }

    return 0;
}