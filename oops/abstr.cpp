#include <iostream>
using namespace std;

class Vehicle
{
private:
    void piston()
    {
        cout << "4 piston\n";
    }

    void manWhoMade()
    {
        cout << "ABCXYZ\n";
    }

public:
    void company()
    {
        cout << "YSK\n";
    }
    void model()
    {
        cout << "SIMPLE\n";
    }
    void color()
    {
        cout << "Red/GREEN/Silver\n";
    }
    void cost()
    {
        cout << "Rs. 60000 to 900000\n";
    }
    void oil()
    {
        cout << "PETRO\n";
    }
};
int main()
{

    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}