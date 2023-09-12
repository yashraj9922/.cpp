// inheritance using public access modifier (using public inheritance and Student class example)

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int id;
    void introduce()
    {
        cout << "Hi! I am " << name << " and I am " << age << " years old." << endl;
        cout << "My student id is " << id << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Yash";
    s1.age = 19;
    s1.id = 12345;
    s1.introduce();
    return 0;
}
