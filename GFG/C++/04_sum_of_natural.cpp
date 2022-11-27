// C++ Program to Calculate Sum of Natural Numbers

#include<iostream>
using namespace std;

int main() {
  int num, sum = 0;

  cout<<"Enter a number"<<endl;
  cin>>num;

  sum = ((num + 1)*num)/2;
  cout<<sum;
  return 0;
}
