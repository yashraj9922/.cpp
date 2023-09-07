// This code gives example for function Overloading--> same function name but different parameters

#include <iostream>
using namespace std;

// Overloading
class studentOne
{
public:
    string name, dept;
    int marks;
    studentOne(string d)
    {
        dept = d;
    }
    void print();
    void print(string name);
    void print(string name, int marks);
    ~studentOne();
};

void studentOne::print()
{
    cout << "Name is " << name << endl;
    cout << "Department is " << dept << endl;
    cout << "Marks is " << marks << endl;
}

void studentOne::print(string name)
{
    cout << "Name is " << name << endl;
    cout << "Department is " << dept << endl;
    cout << "Marks is " << marks << endl;
}

void studentOne::print(string name, int marks)
{
    cout << "Name is " << name << endl;
    cout << "Department is " << dept << endl;
    cout << "Marks is " << marks << endl;
}

studentOne::~studentOne()
{
    cout << "This is a desctructor" << endl;
}

int main()
{
    studentOne s("IT");
    studentOne p(s);
    s.name = "Neil";
    s.marks = 100;
    p.name = "Kenil";
    p.marks = 80;
    s.print();
    p.print();
    s.print("Neil");
    p.print("Kenil");
    s.print("Neil", 100);
    p.print("Kenil", 80);
}