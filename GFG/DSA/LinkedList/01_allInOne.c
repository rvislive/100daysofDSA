// WAP to create a linked list and perform insertions and deletions of all cases.

#include<stdio.h>
#include<stdlib.h> // for malloc dynamic memory allocation

// create nodes of linked List by using stracture
typedef struct Node {
    int data;
    struct Node *next; // Self referance next veriable. 
} Node;

// display the linked list
void display_ll(Node *head) {
    Node *ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// create a linked list
Node * create_ll(Node *head) {
    int num;
    Node *node;
    printf("Enter the -1 to the end\n");
    printf("Enter the data: ");
    scanf("%d", &num);

    while(num != -1) {
        node = (Node *)malloc(sizeof(Node));
        node->data = num;
        if(head == NULL) {
            node->next = NULL;
            head = node;
        } else {
            node->next = head;
            head = node;
        }

        printf("Enter the next data: ");
        scanf("%d", &num);
    }
    return head;
}


// inseration at the begaining. 
Node * insert_beg(Node * head) {
    // 2, 3, 4, 5, 6 
    int num; 
    printf("Enter the data: ");
    scanf("%d", &num);
    Node * ptr = (Node *)malloc(sizeof(Node));
    ptr->data = num;
    ptr->next = head;
    head = ptr;
    return head;
}

// Insert in between
Node * insert_in_between(Node * head) {
    // 12, 24, 35, 46
    int index, num;
    printf("Enter data: ");
    scanf("%d", &num);

    printf("At which index: ");
    scanf("%d", &index);

    Node * ptr = head;
    Node * qtr = (Node *)malloc(sizeof(Node));

    while(ptr != (index - 1)) {
        ptr = ptr->next;
    }
    ptr->next = qtr;
    qtr->data = num;
    qtr->next = ptr->next;
    return head;
}

int main() {
    Node *head;
    head = create_ll(head);
    display_ll(head);
    // head = insert_beg(head);
    // head = insert_in_between(head);
    // display_ll(head);
    return 0;
}