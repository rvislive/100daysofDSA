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
  Node * sixth = new Node();
  
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
  fifth->next = sixth;
  tell = fifth;

  sixth->data = 10;
  sixth->next = NULL;
  tell = sixth;
  

  head = first;
  printLinkedList(head);
  
  // Delete Elements to a Linked List
  // 1. At the beginning eg. Delete first Elements 
  // cout<<"Delete first Elements"<<endl;
  // head = second;
  // free(first);
  // printLinkedList(head);

  // 2. delete 3rd(7) Elements
  // cout<<"Delete 3rd Elements"<<endl;
  // int pos = 3;
  // Node * temp = head;
  // int index = 0;
  // while(index < pos - 2) {
  //   temp = temp->next;
  //   index++;
  // }
  // temp->next = temp->next->next;
  // printLinkedList(head);

  // 3. Delete at the end 
  cout<<"Delete last Elements"<<endl;
  Node * temp = head;
  while(temp->next->next != NULL) {
    temp = temp->next;
  }
  temp->next = NULL;
  // tell = temp; 
  printLinkedList(head);
  
  return 0;
} 
