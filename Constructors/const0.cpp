// learning constructors

#include <iostream>
using namespace std;

class student
{
public:
    string name, branch;
    student()
    {
        branch = "DSAI";
    }
    student(string n)
    {
        name = n;
    }
    student(string n, string b)
    {
        name = n;
        branch = b;
    }
    void print();
};

void student::print()
{
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
}

int main()
{
    student s1, s2("Tejaswini"), s3("Avishkar", "CSE");
    s1.name = "Yashraj";
    s1.print();
    s2.print();
    s3.print();
    return 0;
}