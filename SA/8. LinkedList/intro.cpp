#include <iostream>
using namespace std;

class Node {
  public: 
    int data;
    Node * next;
};

int main() {

  // create first Node
  Node * head;
  Node * tell;

  Node * first = new Node();
  Node * second = new Node();
  Node * third = new Node();
  
  first->data = 5;
  first->next = second;
  tell = first;

  second->data = 6;
  second->next = third;
  tell = second;

  third->data = 7;
  third->next = NULL;
  tell = third;

  head = first;

  Node * temp = head;
  while(temp != NULL) {
    cout<<temp->data <<" ";
    temp = temp->next;
  }

  cout<<endl;
  cout<<head->next<<endl;
  return 0;
} 
