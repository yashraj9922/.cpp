// This is Operator Overloading ++

#include <iostream>
using namespace std;

class student
{
public:
    string name, branch;
    int marks;
    student(string n, string b, int m)
    {
        name = n;
        branch = b;
        marks = m;
    }
    void print();
    void operator++();
    void operator++(int);
    ~student();
};

void student::print()
{
    cout << "Name is " << name << endl;
    cout << "Branch is " << branch << endl;
    cout << "Marks is " << marks << endl;
}

void student::operator++()
{
    ++marks;
}

void student::operator++(int)
{
    marks++;
}

student::~student()
{
    cout << "This is a destructor" << endl;
}

int main()
{
    student s("Neil", "IT", 100);
    s.print();
    ++s;
    s.print();
    s++;
    s.print();
}
// This is Operator Overloading + and -