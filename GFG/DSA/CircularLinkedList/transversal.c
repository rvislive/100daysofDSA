// Transversal Cricular Linked List

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} Node;

Node * display_cll(Node * head) {
    Node * ptr = head;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

Node * insert_at_beg_cll(Node * head, int value) {
    Node * ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    return head;
}

Node * create_circular_ll() {
    Node *head, *first, *second, *third, *fourth;

    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    head->data = 4;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 7;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = head;

    return head;
}

int main() {
    Node * head;
    head = create_circular_ll();
    display_cll(head);
    // head = insert_at_beg_cll(head, 10);
    // display_cll(head);
    return 0;
}