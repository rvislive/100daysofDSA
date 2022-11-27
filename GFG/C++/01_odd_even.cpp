// C++ Program to Check Whether Number is Even or Odd
#include<iostream>
using namespace std;

int main() {
  int num;
  
  cout<<"Enter a number"<<endl;
  cin>>num;

  if((num % 2) == 0) {
    cout<<num << " is even number"<<endl;
  } else {
    cout<< num << " is odd number"<<endl;
  }
  cout<< "Thank you bhai"<< endl;
  return 0;
}
