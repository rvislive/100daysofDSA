#include<stdio.h>
#include<malloc.h>

typedef struct Node {
    int data;
    struct Node * left;
    struct Node * right;
} Node; 

Node * createNode(int data) {
    Node * newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    // creating root node or first node
    Node * p = createNode(2);
    /* 
    p = (Node *)malloc(sizeof(Node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL; */

    // creating left node of root node or second node
    Node * p1 = createNode(1);
    /* 
    Node * p1;
    p1 = (Node *)malloc(sizeof(Node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL; */

    // creating right node of root node or third node
    Node * p2 = createNode(4);
    /* 
    Node * p2;
    p2 = (Node *)malloc(sizeof(Node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL; */

    // connecting left and right node to the root node.
    p->left = p1;
    p->right = p2;
    return 0;
}

/* 
   2
1     4  

*/