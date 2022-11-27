// 4 type of insert in the linked list
// 1. At the begining
// 2. In between
// 3. at the end
// 4. after Node

#include<stdio.h>
#include<stdlib.h>

// [data | *next]
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void displayLinkedList(Node *ptr) {
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// inserting the node at the begining
Node * insertAtBegining(Node *head, int value) {
    Node *ptr = (Node *)malloc(sizeof(Node)); // this is the newNode
    ptr->next = head; // ptr's next = head, newNode will point to the head
    ptr->data = value;// ptr's data = value just addiging value of new Node
    head = ptr; // Now, head will point to the newNode
    return head; // this is our new head
}

// inserting in between
Node * insertInBetween(Node *head, int value, int index) {
    Node *ptr = (Node *)malloc(sizeof(Node)); 
    Node *p = head;
    
    int i = 0; 
    while(i < (index - 1)) {
        p = p->next; // keep moving to the point before the index
        i++; 
    }
    ptr->next = p->next; // connect to the pervious node to the newely constracted node to the next node
    ptr->data = value; 
    p->next = ptr; // connect to the pervious node to the newely constracted node ptr

    return head;
}

// inserting the node at the end
Node * insertAtEnd(Node *head, int value) {
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node * p = head;

    while(p->next != NULL) {
        p = p->next; // keeping moving to the last node
    }
    p->next = ptr; // connect the last node to the new node
    ptr->next = NULL; // make new node as the last node
    ptr->data = value; // assign value
    return head;
}

// inserting the node after a node.
Node * insertAfterNode(Node * head, Node * prevNode, int value) {
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = value;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main() {
    Node *head, *first, *second, *third, *fourth;

    head = (Node *)malloc(sizeof(Node));
    first = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    // Assign all the nodes to the data and point to the next
    head->data = 4;
    head->next = first;

    first->data = 7;
    first->next = second;

    second->data = 13;
    second->next = third;

    third->data = 19;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    displayLinkedList(head);
    head = insertAtBegining(head, 29);
    // // insertInBetween(head, 31, 1);
    // // insertAtEnd(head, 33);
    // insertAfterNode(head, second, 99);
    displayLinkedList(head);
    return 0;
}