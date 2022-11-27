// Generate Subsets of the string

#include<iostream>
using namespace std;

// METHOD 1: 
void subsets(string s, string curr = "", int i = 0) {
  if(i == s.length()) {
    cout<<curr<<endl;
    return;
  }
  subsets(s, curr, i+1);
  subsets(s, curr + s[i], i+1);
}

int main() {
  subsets("AB");
  return 0;
}
