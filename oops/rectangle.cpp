#include <iostream>
using namespace std;

class Rectangle
{
    // everything you write inside a class by default becomes private
    // int length;
    // int breadth;

public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1; // creating objects of rectangle.....variables of type Rectangle
    r1.length = 10;
    r1.breadth = 20;

    Rectangle *p;
    p = &r1;         // pointer and objects
    p->length = 100; // accessing members of object

    Rectangle *q;      // declaring a pointer
    q = new Rectangle; // creating a object

    // Rectangle *q = new Rectangle(); --> object is created in heap with length and breadth as member variables

    cout << "Area of r1 is: " << r1.area() << endl;
    return 0;
}