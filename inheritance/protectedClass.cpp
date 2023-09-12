// inheritance using protected access modifier

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;
};

class Student : protected Person
{
public:
    int id;
    void introduce()
    {
        cout << "Hi! I am " << name << " and I am " << age << " years old." << endl;
        cout << "My student id is " << id << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};

int main()
{
    Student s1;
    s1.setName("Yash");
    s1.setAge(19);
    s1.id = 12345;
    s1.introduce();
    return 0;
}