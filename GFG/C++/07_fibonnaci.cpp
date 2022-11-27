// C++ Program to Display Fibonacci Series

#include<iostream>
using namespace std;

int main() {
  int num, num1 = 0, num2 = 1, nextNum = 0;

  cin>>num; //10
  // 0, 1, 1, 2, 
  for(int i = 1; i < (num - 1); i++) {
    if(i == 1) {
      cout<< num1 << ", ";
    } 

    if(i == 2) {
      cout<< num2 << ", ";
    }

    nextNum = num1 + num2;
    cout<<nextNum << ", ";
    num1 = num2;
    num2 = nextNum;
  }
  

  return 0;
}
