// Program to check whether a number is a power of 2 or not.
#include<iostream>
using namespace std;

// Method 1: By checking the reminder of every n/2
bool isPowerOf2(int n) {
  if(n < 0) return false;
  while(n > 1) {
    if((n%2) == 0) {
      n = n/2;
    } else {
      return false;
    }
  }
  return true;
}

// Method 2: by using Brain Kernigan Algorithm
int countBitBKA(int n) {
  int count = 0;
  while(n>0) {
    n = (n & (n-1));
    count ++;
  }
  return count;
}

bool isPowerOfTwo(int n) {
  if(countBitBKA(n) == 1) {
    return true;
  }
  return false;
}

int main() {
  int n = 16;
  cout<<isPowerOf2(n)<<endl;
  return 0;
}
