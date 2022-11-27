// Check if any subarray sum == 0;

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> A {12, 0, 6, 3, 8, 2, 8, 5, 8, 7};
  int N = A.size();

  // find prefix sum;
  vector<int> prefA(N, 0);
  prefA[0] = A[0];
  for(int i=1; i<N; i++) {
    prefA[i] = prefA[i-1] + A[i];
  }

  // check if prefA contains 0 then return true
  for(int i=0; i<N; i++) {
    if(prefA[i] == 0) {
      cout<<"true"<<endl;
      break;
    }
  }

  unordered_map<int, bool> isThere;
  int flag = 0;
  for(int i=0; i<N; i++) {
    if(isThere.count(prefA[i]) > 0 ) {
      flag = 1;
      break;
    }
    isThere[prefA[i]] = true;
  }

  if(flag) cout<<"true"<<endl;
  else cout<<"false"<<endl;

  return 0;
} 