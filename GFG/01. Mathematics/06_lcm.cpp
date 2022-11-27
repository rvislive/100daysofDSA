//LCM of Two Numbers

#include<iostream>
using namespace std;

// Method 1: by check divisiblity one by one to max
int lcm(int a, int b) {
  int result = max(a, b);
  while(true) {
    if((result % a) == 0 && (result % b) == 0) {
      return result;
    }
    result ++;
  }
}

// Method 2: As we know, a*b = gcd(a,b) * lcm(a,b);
int gcdOptimazed(int a, int b) {
  if(b == 0) return a;
  return gcdOptimazed(b, a%b);
}

int lcmOptimazed(int a, int b) {
  return (a*b)/gcdOptimazed(a, b);
}

int main() {
  cout<<lcmOptimazed(12, 10);
  return 0;
}
