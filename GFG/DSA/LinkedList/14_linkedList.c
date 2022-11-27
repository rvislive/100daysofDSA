#include<stdio.h>
#include<stdlib.h>

// defining nodes
// [data | *next]
typedef struct Node {
    int data;
    struct Node *next; // Self referansing stracture
} Node;


void transversalLinkedList(Node *ptr) {
    // printf("%d", sizeof(NULL));
    printf("Ptr: %d\n", ptr);
    while(ptr != NULL) { // ptr is the structure pointer
        printf("%d ", ptr->data);
        ptr = ptr->next; 
    }
    printf("\n");
}


int main() {
    Node *head, *first, *second, *third;

    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    
    // assigning the value of head data and pointing the next first node
    head->data = 7;
    head->next = first;

    // assigning the value of fist data and pointing the next second node
    first->data = 11;
    first->next = second;

    // assigning the value of head data and pointing the next node
    second->data = 17;
    second->next = third;

    // added one more node
    third->data = 67;
    third->next = NULL;

    transversalLinkedList(head);
    return 0;
}