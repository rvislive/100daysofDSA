// print a numner from N to One using recursion and 1 to N;

#include<iostream>
using namespace std;

// Method 1: N to One
void NtoOne(int n) {
  if(n == 0) {
    return;
  }
  cout<<n<<" ";
  NtoOne(n-1);  
}

// Question 2: one to N;
void OneToN(int n) {
  if(n == 0) return;
  OneToN(n - 1);
  cout<<n<<" ";
}


int main() {
  NtoOne(5);
  cout<<endl;
  OneToN(5);
  return 0;
}
