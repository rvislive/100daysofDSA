/*
Factorial of A Number 
i/p: 5
o/p: 120
*/

#include<iostream>
using namespace std;

// Method 1: Itterative solution
int fac(int n) {
  int result = 1;
  while(n>1) {
    result *= n;
    n--;
  }
  return result;
}

// Method 2: by using recursive function
int facByRecursive(int n) {
  if(n == 1) {
    return 1;
  }
  return n * facByRecursive(n-1);
}

int main() {
  int n = 6;
  cout<<facByRecursive(n)<<endl;
  return 0;
}
