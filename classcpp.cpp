#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    int marks;

    void print()
    {
        cout << name << endl;
        cout << rollno << endl;
        cout << marks << endl;
    }
};

int main()
{
    student s;
    string sname;
    cout << "Enter the student name" << endl;
    cin >> sname;
    s.name = sname;
    s.rollno = 1234;
    s.marks = 88;
    s.print();
    return 0;
}
