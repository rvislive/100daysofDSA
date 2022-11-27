// find the first non-repeating element of the array. 

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> A {12, 2, 6, 3, 8, 2, 8, 5, 8, 7};
  
  int N = A.size();
  unordered_map<int, int> freq;
  int count = 0;
  for(int i=0; i<A.size(); i++) {
    freq[A[i]] ++; 
  }

  for(int i=0; i<A.size(); i++) {
    if(freq[A[i]] == 1) {
      cout<<A[i]<<endl;
      break;
    }
  }

  return 0;
} 