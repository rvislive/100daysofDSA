// C++ Pass Objects to Function

#include<iostream>
using namespace std;

class Student {
  public:
    int marks;

    Student(int mark) {
      marks = mark;
    }
};

int averageMarks(Student s1, Student s2) {
  return (s1.marks + s2.marks)/2;
}

int main() {
  Student stud1(78), stud2(87);

  cout<<averageMarks(stud1, stud2)<<endl;
  return 0;
}
