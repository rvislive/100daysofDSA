// understanding the class and objects with private access modifier.

#include<iostream>
using namespace std;

// create a class
class Room {
  private: 
    int length;
    int breadth;
    int height;

  public:
    void initData(int a, int b, int c) {
      length = a;
      breadth = b;
      height = c;
    }

    int calculateArea() {
      return length * breadth;
    }

    int calculateVolume() {
      return length * breadth * height;
    }
};

int main() {
  // create a object of Room class
  Room room;

  // accessing the variable member of the class using dot operator
  room.initData(12, 5, 3);

  cout<<"Area of the room is : "<< room.calculateArea() <<endl;
  cout<<"Volume of the room is : " << room.calculateVolume() << endl;
  return 0;
}
