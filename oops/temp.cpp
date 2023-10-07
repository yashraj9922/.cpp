#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        // create a EMPTY constructor
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setName(string name)
    {
        this->name = name;
    }
};

int main()
{
    Person p1("Yash", 20), person;
    cout << "My name is : " << p1.getName() << endl;
    cout << "My age is : " << p1.getAge() << endl;

    person.setName("Jane Doe");
    person.setAge(32);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
}