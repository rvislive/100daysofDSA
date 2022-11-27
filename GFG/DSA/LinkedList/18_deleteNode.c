// Delection in the linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


void dispalyLinkedList(Node * head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// delete_beg
Node * delete_beg(Node *head) {
    Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// delete_in_between
Node * delete_in_between(Node *head, int index) {
    // hurry bhai logic
    Node *ptr = head;
    Node *qtr = head->next;

    for(int i = 0; i < (index - 1); i++) {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = qtr->next;
    free(qtr);
    return head;
}

// delete_in_end
Node * delete_end(Node *head) {
    Node * ptr = head;
    Node * qtr = head->next;

    while(qtr->next != NULL) {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = NULL;
    free(qtr);
    return head;
}

// Delete the particular value **IMPORTANT
Node * delete_value(Node * head, int value) {
    Node *ptr = head;
    Node *qtr = head->next;

    for(int i = 0; qtr->data != value ; i++) {
        ptr = ptr->next;
        qtr = qtr->next;
    }

    if(qtr->data == value) {
        ptr->next = qtr->next;
        free(qtr);
    }
    return head;
}

int main() {
    Node *head, *first, *second, *third, *forth, *fifth;

    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    forth = (Node *)malloc(sizeof(Node));
    fifth = (Node *)malloc(sizeof(Node));

    // 2, 5, 9, 11, 14, 19
    head->data = 2;
    head->next = first;

    first->data = 5;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data = 19;
    third->next = forth;

    forth->data = 11;
    forth->next = fifth;

    fifth->data = 14;
    fifth->next = NULL;

    dispalyLinkedList(head);
    // head = delete_beg(head);
    // head = delete_in_between(head, 2);
    head = delete_end(head);
    head = delete_value(head, 12);
    dispalyLinkedList(head);

    return 0;
}