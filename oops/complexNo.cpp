#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    // Complex add(Complex x) // return type is Complex
    Complex operator +(Complex x) // return type is Complex
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    Complex c1(5, 3), c2(10, 5), c3;
    // c3 = c1.add(c2); // c3 = c1 + c2; --> c1(real) and c2(x.real) are added
    // c3 = c1.operator +(c2);-->wrong way of calling
    c3 = c1 + c2;// --> c1(real) and c2(x.real) are added
    cout << c3.real << " + i" << c3.img << endl;
    return 0;
}