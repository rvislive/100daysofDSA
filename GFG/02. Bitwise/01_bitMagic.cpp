// Understanding the all Bit magic operator

#include<iostream>
using namespace std;

// AND Operator 
int andOp(int x, int y) {
  return x & y;
}

// OR operator
int orOp(int x, int y) {
  return x | y;
}

// XOR operator
int xorOp(int x, int y) {
  return x ^ y;
}

// left shift operator by 1 
int leftShiftByOne(int x) {
  return x<<1; // x<<3 etc...
}

// left shift operator by y
int leftShiftByY(int x, int y) {
  return x<<y;
}

// right shift operator
int rightShiftByOne(int x) {
  return x>>1; // x>>2 x>> 3 ...
}

// right shift by y
int rightShiftByY(int x, int y) {
  return x>>y;
}

//Not operator
int notOp(int x) {
  unsigned int y = x;
  return ~y;
}

int main() {
  int x = 3, y = 6;
  cout<<andOp(x, y)<<endl;
  cout<<orOp(x, y)<<endl;
  cout<<xorOp(x, y)<<endl;
  cout<<leftShiftByOne(x)<<endl;
  cout<<leftShiftByY(x, y)<<endl;
  cout<<rightShiftByOne(x)<<endl;
  cout<<rightShiftByY(x, y)<<endl;
  cout<<notOp(x)<<endl;
  return 0;
}
