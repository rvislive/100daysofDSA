// Given a string write a recursive fun to check for palindrome
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string S, int s, int e) {
    
    if(s>e) {
        return true;
    }

    if(S[s] == S[e]) {
        return isPalindrome(S, s+1, e-1);
    }
    return false;
}

int main() {
    string str = "madam";
    bool res = isPalindrome(str, 0, 4);
    cout<<res;
    return 0;
}
