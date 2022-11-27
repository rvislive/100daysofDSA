#include <iostream>
using namespace std;

class Node {
  public: 
    int data;
    Node * next;
};

void printLinkedList(Node * head) {
  Node * temp = head;
  while(temp != NULL) {
    cout<<temp->data <<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main() {

  // create first Node
  Node * head;
  Node * tell;

  Node * first = new Node();
  Node * second = new Node();
  Node * third = new Node();
  Node * fourth = new Node();
  Node * fifth = new Node();
  
  first->data = 5;
  first->next = second;
  tell = first;

  second->data = 6;
  second->next = third;
  tell = second;

  third->data = 7;
  third->next = fourth;
  tell = third;

  fourth->data = 8;
  fourth->next = fifth;
  tell = fourth;

  fifth->data = 9;
  fifth->next = NULL;
  tell = fifth;

  head = first;
  printLinkedList(head);
  
  // Insert Elements to a Linked List
  // 1. At the beginning eg. Add 4 
  //cout<<"Insert at the beginning : 4"<<endl;
  Node * newNode = new Node();
  newNode->data = 4;
  newNode->next = head;
  head = newNode;
  //printLinkedList(head);

  // 1.(A) Add one more element at the beginning 3.
  //cout<<"Insert at the beginning : 3"<<endl;
  Node * nextNewNode = new Node();
  nextNewNode->data = 3;
  nextNewNode->next = head;
  head = nextNewNode;
  //printLinkedList(head);

  // 2. At the end add. 10;
  //cout<<"Insert at the end : 10"<<endl;
  Node * endNode = new Node();
  endNode->data = 10;
  endNode->next = NULL;
  tell->next = endNode;
  tell = endNode;
  //printLinkedList(head);

  // 2.(A) Add one more at the end 11;
  //cout<<"Insert at the end : 11"<<endl;
  Node * lastNode = new Node();
  lastNode->data = 11;
  lastNode->next = NULL;
  tell->next = lastNode;
  tell = lastNode;
  //printLinkedList(head);

  // Insert 99 at position 3
  Node *temp = head;
  int count = 0, pos = 3;
  while(count<pos-1) {
    temp = temp->next;
    count++;
  }
  Node * newNodeAtPosThree = new Node();
  newNodeAtPosThree->data = 99;
  newNodeAtPosThree->next = temp->next;
  temp->next = newNodeAtPosThree;
  printLinkedList(head);

  return 0;
} 
