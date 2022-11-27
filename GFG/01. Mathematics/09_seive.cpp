// Sieve of Eratosthenes is used to find the prime factor of any integer using array

#include<iostream>
using namespace std;

// Mehtod 1: fill all the indexes of array as a true now, whenever will find any divisior make it false, then print all the true indexes.

void primeFactor(int num) {
  if(num <= 1) return;

  bool isPrime[num + 1];
  fill(isPrime, isPrime + num/2, true);

  for(int i = 2; i <= num/2; i++) {
    if(isPrime[i]) {
      for(int j = 2*i; j <= num; j++) {
        isPrime[j] = false;
      }
    }
  }

  for(int i = 2; i <= num; i++) {
    if(isPrime[i]) {
      cout<<i<<" ";
    }
  }
}

int main() {
  primeFactor(33);
  return 0;
}
