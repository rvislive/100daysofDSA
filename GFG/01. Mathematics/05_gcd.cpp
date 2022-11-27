// Greatest Common Divisor

#include<iostream>
using namespace std;

// Method 1: check for every value from min to 1
int gcd(int a, int b) {
  int result = min(a, b);
  while(result > 0) {
    if((a % result == 0) && (b % result == 0)) {
      break;
    }
    result --; 
  }
  return result;
}

// Method 2: By Euclied algorithm,if a > b, gcd(a, b) = gcd(a-b, b)  else gcd(a, b-a) = gcd(a, b-a);
int gcdByEuclied(int a, int b) {
  while(a != b) {
    if(a > b) 
      a = a - b;
    else 
      b = b - a;
  }
  return a;
} 

// Method 3: More Optimazed way, Here b will be always less then a.
int gcdOptimazed(int a, int b) {
  if(b == 0) return a;
  return gcdOptimazed(b, a%b);
}

int main() {
  cout<<gcdOptimazed(36, 12)<<endl;
  return 0;
}
