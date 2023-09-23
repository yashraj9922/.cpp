// Multiple Inheritance

#include <iostream>
using namespace std;

class College
{
public:
    string name;
    void print()
    {
        cout << "College Name: " << name << endl;
    }
};

class Professor
{
public:
    string pname;
    void print()
    {
        cout << "Professor Name: " << pname << endl;
    }
};

class totalMarks
{
public:
    int marks;
    void print()
    {
        cout << "Total Marks: " << marks << endl;
    }
};

class Student : public College, public Professor, public totalMarks
{
public:
    string sname;
    void print()
    {
        cout << "Student Name: " << sname << endl;
        cout << "College Name: " << name << endl;
        cout << "Professor Name: " << pname << endl;
        cout << "Total Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "IIIT";
    s1.pname = "Manjunath KV";
    s1.sname = "Yashraj Kadam";
    s1.marks = 100;
    cout << "College Name: " << s1.name << endl;
    cout << "Professor Name: " << s1.pname << endl;
    cout << "Student Name: " << s1.sname << endl;
    cout << "Total Marks: " << s1.marks << endl;
    endl(cout);

    s1.print();
    endl(cout);
    s1.College::print();
    s1.Professor::print();
    s1.totalMarks::print();
    return 0;
}