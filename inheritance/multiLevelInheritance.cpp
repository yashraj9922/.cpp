// multilevel Inheritance
# include <iostream>
using namespace std;

class College{
    public:
    string name;
    void print(){
        cout << "College Name: " << name << endl;
    }
};

class Professor: public College{
    public:
    string pname;
    void print(){
        cout << "Professor Name: " << pname << endl;
    }
};

class Student: public Professor{
    public:
    string sname;
    void print(){
        cout << "Student Name: " << sname << endl;
    }
};

int main(){
    Student s1;
    s1.name = "IIIT";
    s1.pname = "Manjunath KV";
    s1.sname = "Yashraj Kadam";
    cout << "College Name: " << s1.name << endl;
    cout << "Professor Name: " << s1.pname << endl;
    cout << "Student Name: " << s1.sname << endl;
    endl(cout);
    s1.print();
    s1.Professor::print();
    s1.College::print();
    return 0;
}