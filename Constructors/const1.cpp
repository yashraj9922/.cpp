#include <iostream>
using namespace std;

class student
{
public:
    string name, branch, hostel;
    student(){
        hostel: "1";
    };
    void print();
};

void student::print()
{
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "hostel" << hostel;
}

int main()
{
    student s[4], b[4];
    int counter;
    cout << "Enter the number of Students";
    cin >> counter;

    for (int i = 0; i < counter; i++)
    {
        cin >> s[i].name;
        cin >> b[i].branch;
    }

    cout << "Details of Students" << endl;
    for (int i = 0; i < counter; i++)
    {
        s[i].print();
        b[i].print();
    }
}