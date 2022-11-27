/*
Trailing Zeros in Factorial
i/p: 5
so, 5! = 120
o/p: 1 (last 1 zero);

*/

#include<iostream>
using namespace std;

int facByRecursive(int n) {
  if(n == 1) {
    return 1;
  }
  return n * facByRecursive(n-1);
}

// Method 1: Find the fac then count the zeroes in the last of result
int Trailing(int n) {
  int fac = facByRecursive(n), count = 0;
  while((fac % 10) == 0) {
    count ++;
    fac = fac/10;
  }
  return count;
}

// Method 2: count only 5, 25, and 125 etc because any even number * 5 = 0.
int TrailingEffecient(int n) {
  int res = 0;
  for (int i = 5; i <= n ; i = i*5) {
    res = res + (n/i);
  }
  return res; 
}

int main() {
  int n = 10;
  cout<<Trailing(n)<<endl;
  return 0;
}
