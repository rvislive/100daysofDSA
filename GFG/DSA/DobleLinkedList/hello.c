#include<stdio.h>
#include<stdlib.h>

// this is double linkedin list
typedef struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

Node * display_dll(Node *head) {
    Node *ptr = head;

    while(ptr != NULL) {
        // printf("(%d, %d, %d)\n", ptr->prev, ptr->data, ptr->next);
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

Node * insert_at_first_dll(Node * head, int value) {
    Node * newNode;
    newNode = (Node *)malloc(sizeof(Node));

    // printf("%d, %d, %d", head, head->prev, head->next);
    newNode->prev = NULL;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

Node * insert_at_end_dll(Node * head, int value) {
    Node * newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    Node * ptr = head;
    while(ptr->next != NULL) {
        printf("(%d, %d, %d)\n", ptr->prev, ptr, ptr->next);
        ptr = ptr->next;
    }
    newNode->prev = ptr;
    newNode->next = NULL;
    return head;
}

int main() {
    Node * head, *first, *second, *third;

    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    
    head->prev = NULL;
    head->data = 4;
    head->next = first;

    first->prev = head;
    first->data = 2;
    first->next = second;

    second->prev = second;
    second->data = 7;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = NULL;

    display_dll(head);
    // head = insert_at_first_dll(head, 12);
    head = insert_at_end_dll(head, 12);
    display_dll(head);
    return 0;
}