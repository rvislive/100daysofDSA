// count the number of fequency in array element.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> A {2, 6, 3, 8, 2, 8, 5, 8};
  
  int N = A.size();
  unordered_map<int, int> freq;

  for(int i=0; i<A.size(); i++) {
    freq[A[i]] = freq[A[i]] + 1;
  }

  for(auto i:freq) {
    cout<<i.first<<" "<<i.second<<endl;
  }

  int q = 6;

  cout<<freq[q];

  return 0;
} 