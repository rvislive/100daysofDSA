// check for the kth bit in set.
#include<iostream>
using namespace std;

// Method 1: check for kth bit in the set
bool checkBit(int n, int k) {
  if((n|k) == n) {
    return true;
  }
  return false;
}

// Method 2: Check for the kth bit using left shift operator 
bool kthBitLeft(int n, int k) {
  if(n & (1 << (k-1))) {
    return true;
  }
  return false;
}

// Method 3: Check for the kth bit using right shift operator
bool kthBitRight(int n, int k) {
  if((n >> (k-1)) & 1) {
    return true;
  }
  return false;
}

int main()
{
  int n, k;
  n = 8;
  k = 2;
  cout<<kthBitRight(n, k)<<endl;
  return 0;
}
