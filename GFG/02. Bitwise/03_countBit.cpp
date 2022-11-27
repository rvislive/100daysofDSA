// Count set bits 

#include<iostream>
using namespace std;

// Method 1: By checking the last bit of the number
int countBit(int n) {
  int count = 0;
  while(n > 0) {
    if((n % 2) != 0) {
      count ++;
    }
    n = n/2;
  }
  return count;
}

// Method 2: By using right shift operator (Brain Kernigan Algorithm)
int countBitBKA(int n) {
  int count = 0;
  while(n>0) {
    n = (n & (n-1));
    count ++;
  }
  return count;
}


int main() {
  int n = 7;
  cout<<countBitBKA(n);
  return 0;
}
