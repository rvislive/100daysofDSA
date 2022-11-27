// C++ Return Object from a Function
#include<iostream>
using namespace std;

class Student {
  public: 
    int marks1, marks2;
};

Student createStudent() {
  Student student;

  student.marks1 = 45;
  student.marks2 = 55;

  return student;
}

int main() {
  Student student1;

  student1 = createStudent();
  cout<< student1.marks1;
  return 0;
}
