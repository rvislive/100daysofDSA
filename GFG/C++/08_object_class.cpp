// understanding the class and objects

#include<iostream>
using namespace std;

struct Room {
  int length;
  int breadth;
  int height;
} room;


// create a class
class Room {
  public: 
    int length;
    int breadth;
    int height;

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
  room.length = 12;
  room.breadth = 5;
  room.height = 2;

  cout<<"Area of the room is : "<< room.calculateArea() <<endl;
  cout<<"Volume of the room is : " << room.calculateVolume() << endl;
  return 0;
}
