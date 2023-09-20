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
    Rectangle r1, r2; // creating objects of rectangle.....variables of type Rectangle
    r1.length = 10;
    r1.breadth = 20;

    cout << r1.area();
    return 0;
}