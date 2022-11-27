// C++ Program to Check Whether a Character is Vowel or Consonant.

#include<iostream>
using namespace std;

int main () {
  char ch;

  cout<< "Enter a character"<<endl;
  cin>>ch;
 
  if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) {
    cout<< ch << " is Vowel."<<endl;
  } else {
    cout<< ch << " is Consonant."<<endl;
  }
  return 0;
}

