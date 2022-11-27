// {1,2, 3, 4, 5, 3, 2, 1, 6};
// OT: 1, 2, 3, 4, 5, 6
// Remove all duplicate element

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> A{1,2, 3, 4, 5, 3, 2, 1, 6};
  
  int N = A.size();
  unordered_map<int, bool> rm;
  vector<int> result;

  for(int i=0; i<A.size(); i++) {
    if(rm.count(A[i]) > 0) continue;
    rm[A[i]] = true;
    result.push_back(A[i]);
  }

  for(int i=0; i<result.size(); i++) {
    cout<<result[i]<<" ";
  }

  return 0;
} 