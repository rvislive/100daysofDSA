#include <iostream>
#include<cstring>
using namespace std;

class AbstractEmployee {
  virtual void askForPoromation() = 0;
};

class Employee : AbstractEmployee {
private:
  string Company;
  int Age;

protected: 
  string Name;

public: 
  // getter and setter for all memebers
  void setName(string name) {
    Name = name;
  }
  string getName() {
    return Name;
  }

  void setCompany(string company) {
    Company = company;
  } 
  string getCompnay() {
    return Company;
  }

  void setAge(int age) {
    if(age >= 18) {
      Age = age;
    }
  }
  int getAge() {
    return Age;
  }

  Employee(string n, string c, int a)  {  
    Name = n;  
    Company = c;
    Age = a;
  }

  void display() {  
    cout<<Name<<" "<<Company<<" "<<Age<<endl;
  }  

  void askForPoromation() {
    if(Age > 30) {
      cout<<Name<<" got promated!"<<endl;
    } else {
      cout<<Name<<", Sorry for now. No promation for now!"<<endl;
    }
  }

  virtual void Work() {
    cout<<Name<<" is checking Email and backlog..."<<endl;
  }

};

// Inhertiance classes
class Developer : public Employee {
public:
  string FavLangauge;
  Developer(string n, string c, int a, string lang) : Employee(n, c, a) {
    FavLangauge = lang;
  }
  void FixBug() {
    cout<<Name<<" fixed the bug in "<<FavLangauge<<endl;
  }

  void Work() {
    cout<<Name<<"(Developer) is checking bugs."<<endl;
  }
};

// Inhertiance class, example 2.
class Teacher : public Employee {
public: 
  string Subject;
  Teacher(string n, string c, int a, string sub) : Employee(n, c, a) {
    Subject = sub;
  }
  void makeLession() {
    cout<<Name<<" prepraing for subject "<<Subject<<endl;
  }

  void Work() {
    cout<<Name<<"(Teacher) is checking book."<<endl;
  }
};

int main() {
    Developer d = Developer("Komal", "School", 12, "C");
    Teacher t = Teacher("Rakesh", "Brainium", 23, "Maths");

    Employee * ed = &d;
    Employee * et = &t;
    ed->Work();
    et->Work();
    return 0;
}
