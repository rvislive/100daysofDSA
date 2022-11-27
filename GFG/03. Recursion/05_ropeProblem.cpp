// Rope CUtting problem using recursion
// n = 23, a = 11; b = 9 and c = 12;

#include<iostream>
#include<algorithm>
using namespace std;

// using recursion
int maxPieces(int n, int a, int b, int c) {
  if(n == 0) return 0;
  if(n < 0) return -1;

  int res = max(maxPieces(n-a, a, b, c), max(maxPieces(n-b, a, b, c), maxPieces(n-c, a, b, c)));
  if(res == -1) return -1;
  return res+1;
}

int main() {
  cout<<maxPieces(23, 11, 9, 12)<<endl;
  return 0;
}
