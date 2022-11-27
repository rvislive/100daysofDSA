/* TO check the number is Palindrome Numbers or not? 
i/P : 3636
o/p: no

i/p: 3663
o/p: yes

*/
#include<iostream>
using namespace std;

// Method 1: Reverse the number and check if is matched or not.
bool isPalindrome(int num) {
  int rev = 0, n = num;
  while(num > 0) {
    rev = rev*10 + num%10;
    num = num /10;
  }
  return (rev == n);
}

int main() {
  int num = 3663;
  cout<< isPalindrome(num);
  return 0;
}
