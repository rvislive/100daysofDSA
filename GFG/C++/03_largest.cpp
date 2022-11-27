// C++ Program to Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;

int main() {
  int num1, num2, num3, num4, result;
  
  // cout<<"Enter three number"<<endl;
  // cin>>num1>>num2>>num3;

  // 7, 15, 13: largest number for the three number using ternary
  // result = (num1 > num2) ? (num1 > num3) ? num1 : num3 : (num2 > num3) ? num2 : num3;

  // 12, 18, 25, 22 : largest number for the four number using ternary
  num1 = 612;
  num2 = 18;
  num3 = 25;
  num4 = 232;
  result = (num1 > num2) ? (num1 > num3) ? (num1 > num4) ? num1 : num4 : (num3 > num4) ? num3 : num4 : (num2 > num3) ? (num2 > num4) ? num2 : num4 : (num3 > num4) ? num3 : num4;   
  cout<<result << " is the largest number"<<endl;
  return 0;
}
