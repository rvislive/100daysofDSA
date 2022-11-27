// Computing Power(x,n)

#include<iostream>
using namespace std;

// Method 1: Using a new formula. Read in the notes
int Power(int x, int n) {
  if (n == 0) return 1;

  if(n % 2 == 0) {
    return Power(x, n/2) * Power(x, n/2);
  } else {
    return Power(x, n-1) * x;
  }
}

// Method 2: By using Iterative Power, Binary representaion
int PowerBr(int x, int n) {
  int res = 1;
  while(n > 0) {
    if(n % 2 != 0) {
      res = res * x;
    }
    x = x * x;
    n = n/2;
  }
  return res;
}

int main() {
  cout<<PowerBr(11, 2);
  return 0;
}
