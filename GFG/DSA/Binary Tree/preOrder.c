// preOder transversal
/* 
     4
    /  \
   1    6
  / \  /  \
 5   2 7    3
*/

#include<stdio.h>
#include<malloc.h>

typedef struct Node {
    struct Node * left;
    int data;
    struct Node * right;
} Node;

Node * createNode(int val) {
    Node * newNode;
    newNode = (Node *)malloc(sizeof(Node));

    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrder(Node * root) {
    if(root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    
    Node * p;
    p = createNode(4);
    Node * p1;
    p1 = createNode(1);
    Node * p2;
    p2 = createNode(6);
    Node * p3;
    p3 = createNode(5);
    Node * p4;
    p4 = createNode(2);
    Node * p5;
    p5 = createNode(3);
    Node * p6;
    p6 = createNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->right = p5;
    p2->left = p6;

    preOrder(p);
    return 0;
}