#include<stdio.h>
#include<stdlib.h>

// creating a linked list to implement Queue
typedef struct Node { 
    int data;
    struct Node * next;
} Node;

// Global veriable for front and rare of the Queue
Node * front = NULL;
Node * rare = NULL;


// is empty
int isEmpty() {
    if(front == NULL) { 
        return 1;
    }
    return 0;
}

// display the Queue
void displayQueue(Node * front) {
    printf("Printing the Queue\n");
    while(front != NULL) {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

// enqueue operations using linked list
void enqueue(int val) {
    Node * newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Queue is full\n");
        return;
    } else {
        newNode->data = val;
        newNode->next = NULL;
        if(front == NULL) {
            front = rare = newNode; // if no elemnt is there then increase front and rare by 1. 
        } else {
            rare->next = newNode; // if there a element then add at the end of linkedlist
            rare = newNode;
        }
    }
}

// delete the first elemnt of linkedin list
int dequeue() {
    Node * ptr = front;

    int val = -1;
    if(isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        front = ptr->next;
        val = ptr->data;
        free(ptr);
        return val;
    }
}

int main() {
    printf("Is Queue empty? : %d\n", isEmpty());

    displayQueue(front);
    enqueue(12);
    enqueue(16);
    enqueue(16);
    enqueue(6);
    displayQueue(front);
    printf("%d ", dequeue(front));
    printf("%d ", dequeue(front));
    displayQueue(front);
    printf("Is Queue empty? : %d\n", isEmpty());
    return 0;
}