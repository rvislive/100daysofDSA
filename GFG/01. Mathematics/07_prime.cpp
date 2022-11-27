// check for the prime number

#include<iostream>
using namespace std;

// Method 1: We will check for i = 2 to n/2 if there is any divisublity then it is not be the prime number else return that number is the prime:  O(n)
bool isPrime(int num) {
  for(int i = 2; i < num/2; i++) {
    if((num % i) == 0) {
      return false;
    }
  }
  return true;
}

// Method 2: see, We need to check only for till sqrt(n) for more optimazed O(sqrt(n)) with constant space complixity
bool isPrimeOpt(int num) {
  for(int i = 2; i*i < num; i++) {
    if((num % i) == 0) {
      return false;
    }
  }
  return true;
}

// Most Optimized Way : If we can check the disivable for 2 and 3 first then we can save many iteration and we also know that prime number can be express in the terms of (6n + 1) and (6n - 1); 
bool isPrimeOptimized(int num) {
  if(num == 1) return false;
  if((num % 2) == 0 && (num % 3) == 0) return false;
  for(int i = 5; i*i <= num; i = i + 6) {
    if((num % i) == 0 || (num % (i+2)) == 0) return false;
  } 
  return true;
}

int main() {
  cout<<isPrimeOptimized(31);
  return 0;
}
