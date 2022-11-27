// sum of the digits using recursion

#include<iostream>
using namespace std;

int sumOfDigits(int n) { 
  if(n <= 0) return n; // We can improve a slight change expect 0;
  return (n%10) + sumOfDigits(n/10);
}

int main() {
  cout<<sumOfDigits(253);
  return 0;
}
