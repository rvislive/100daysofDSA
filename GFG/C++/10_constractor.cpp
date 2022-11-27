// Undertanding Constractor, the name of the function is same as class with no any returen type. 
#include<iostream>
using namespace std;

class Well {
  private: 
    double length;
    double height;

  public:
  // this is no parametrize constructor
    Well() { // 
      length = 5.5;
      cout<<"Length of the well is "<<length<<endl;
    }

  // this is parametrize constractor
  Well(int len, int high) {
    length = len;
    height = high;
    cout<<"Area of the well is "<<length*height;
  }

  // We can make many no. of contsructor, with different no of parameters or different type of paramerters
  Well(int len, double high) {
    length = len;
    height = high;
  }

  double Area() {
    return length*height;
  }
};

int main() {
  Well well1;
  Well well2(5, 6.6);
  cout<<well2.Area();
  return 0;
}
