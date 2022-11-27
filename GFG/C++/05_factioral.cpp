// C++ Program to Find Factorial

#include<iostream>
using namespace std;

int main() {
  int num, fac = 1;

  cout<<"Enter a number"<<endl;
  cin>>num;

  for(int i = num; i >= 2; i--) {
    fac *= i;
  }

  cout<<fac;
  return 0;
}
