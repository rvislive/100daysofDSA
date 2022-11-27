/* Finding number of digits in a number
  I/P: 34754
  O/P: 5
*/
#include<iostream>
#include<cmath>
using namespace std;

// Method 1 : Will count one by one
int countDigits(int n) {
  int count = 0;
  while(n>0) {
    count ++;
    n = n/10;
  }
  return count;
}

// Medthod 2 : Recursive Function
int countDigitsByRecursive(int n) {
  if(n == 0) return 0; // base condition. 
  return (1 + countDigitsByRecursive(n/10));
}

// Method 3: Logrithmic function
int countDigitsByLog(int n) {
  return log10(n) + 1;
}

int main() {
  int n = 347433454;
  cout<<countDigitsByLog(n);
  return 0;
}
