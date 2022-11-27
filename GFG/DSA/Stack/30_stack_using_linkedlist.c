// implementing Stack using linkedlist

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} Node;

// isEmpty operation
int isEmpty(Node * top) {
    if(top == NULL) {
        return 1;
    }
    return 0;
}

// isFULL Operation
int isFull(Node * top) {
    // ** very important, what we are doing here, we are asking a memory for new node dynamiclly, if system fails to provide then we will say it is full.
    Node * ptr = (Node *)malloc(sizeof(Node));
    if(ptr == NULL) {
        return 1;
    }
    return 0;
}

// push operation
Node * push(Node * top, int val) {
    if(isFull(top)) {
        printf("Stack Overflow\n");
    } else {
        Node * newNode = (Node *)malloc(sizeof(Node));
        newNode->data = val;
        newNode->next = top;
        top = newNode;
        return top;
    }
} 

// pop operation
int pop(Node * top) {
    if(isEmpty(top)) {
        printf("Stack Underflow");
    } else {
        Node * ptr = top;
        int x = ptr->data;
        top = ptr->next;
        free(ptr);
        return x;
    }
}

//print stack
void displayStack(Node * top) {
    if(isEmpty(top)) {
        printf("Stack Underflow");
    }
    Node * ptr = top;
    for(int i = 0; ptr != NULL; i++) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}


int main() {
    Node * top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 87);
    top = push(top, 38);
    top = push(top, 8);
    displayStack(top);
    printf("\n%d", pop(top));
    return 0;
}