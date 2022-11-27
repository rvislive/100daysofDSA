// check for the prime factor

#include<iostream>
using namespace std;

// Method 1: Check first that the divisable number is prime or not? if it is prime then check it divisiable or not? // O(nlogn)
bool isPrime(int num) {
  if(num == 1) return false;
  if((num % 2) == 0 && (num % 3) == 0) return false;
  for(int i = 5; i*i <= num; i = i + 6) {
    if((num % i) == 0 || (num % (i+2)) == 0) return false;
  } 
  return true;
}

void primeFactor(int num) {
  if(num <= 1) return;
  for(int i = 2; i*i <= num; i++) {
    if(isPrime(i)) { 
      while((num % i) == 0) {
        cout<<i<< " ";
        num = num/i;
      }
    }
  }
  if(num > 1) cout<<num;
}

// Method 2: Efficient Prime Factor finding, by checking 2 and 3 first then decrese the no of itteration
void primeFactorOptimized(int num) {
  if(num <= 1) return;

  while((num % 2) == 0) {
    cout<<2<<" ";
    num = num/2;
  }

  while((num % 3) == 0) {
    cout<<3<<" ";
    num = num/3;
  }

  for(int i = 5; i*i <= num; i = i + 6){
    while((num % i) == 0) {
      cout<<i<<" ";
      num = num/i;
    }

    while((num % (i + 2)) == 0) {
      cout<<i<< " ";
      num = num/(i+2);
    }
  }

  if(num > 3) {
    cout<<num;
  }
}

int main() {
  primeFactorOptimized(12);
  return 0;
}
