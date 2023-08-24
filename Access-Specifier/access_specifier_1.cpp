#include <iostream>
using namespace std;

class student
{

public:
  string name;
  void print_details()
  {
    cout << "The Student Name is: " << name << endl;
    cout << "The marks obtained is: " << marks << endl;
  }
  // private: --> int marks is private..hence cannot be directly accessed out of class
  int marks;
};

int main()
{
  student s;
  s.name = "Manjunath";
  s.marks = 88;
  s.print_details();

  return 0;
}
