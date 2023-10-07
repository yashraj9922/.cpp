#include <iostream>

using namespace std;

class Person
{
    int id;
    char name[50];

public:
    void set_p()
    {
        cout << "Enter the id ";
        cin >> id;

        cout << "Enter the name ";
        cin >> name;
    }

    void display_p()
    {
        cout << endl
             << "Id " << id << " and my name is " << name << endl;
    }
};
class Student : private Person
{
    char course[50];
    int fee;

public:
    void set_s()
    {
        set_p();
        cout << "Enter the course ";
        cin >> course;

        cout << "Enter the course fees ";
        cin >> fee;
    }

    void display_s()
    {
        display_p();
        cout << "Course: " << course << "\nFee: " << fee << endl;
    }
};
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}