// check, is key there in binary search tree? 
#include<stdio.h>
#include<malloc.h>

typedef struct Node {
    struct Node * left;
    int data;
    struct Node * right;
} Node ;

Node * createNode(int val) {
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrder(Node * root) {
    if(root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(Node * root) {
    static Node * prev = NULL;
    if(root != NULL) {
        if(!isBST(root->left)) {
            return 0;
        }

        if(prev != NULL && root->data <= prev->data) {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    } else {
        return 1;
    }
}

// searching a key with recursive
Node * Search(Node * root, int key) {
    if(root == NULL) {
        return NULL;
    }

    if(root->data == key) {
        return root;
    } else if(root->data > key) {
        return Search(root->left, key);
    } else {
        return Search(root->right, key);
    }
}

/*
        9 
      /   \
     4     11
    / \
   2   7

*/

int main() {
    
    Node * root;
    root = createNode(9);

    Node * p1;
    p1 = createNode(4);

    Node * p2;
    p2 = createNode(2);

    Node * p3;
    p3 = createNode(7);

    Node * p4;
    p4 = createNode(11);

    root->left = p1;
    root->right = p4;
    p1->left = p2;
    p1->right = p3;

    inOrder(root);
    printf("\n");
    printf("%d", isBST(root));
    printf("\n");
    Node * isFound = Search(root, 2);
    if(isFound != NULL) {
        printf("Found %d", Search(root, 2)->data);
    } else {
        printf("Elemnt not Found");
    }
    return 0;
}