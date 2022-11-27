
// no of distint element of the array. 

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> A {2, 6, 3, 8, 2, 8, 5, 8, 7};
  
  int N = A.size();
  unordered_map<int, bool> isThere;
  int count = 0;
  for(int i=0; i<A.size(); i++) {
    // if(isThere.count(A[i]) == true) {
    //   continue;
    // }
    isThere[A[i]] = true;
  }

  cout<<isThere.size()<<endl;

  return 0;
} 