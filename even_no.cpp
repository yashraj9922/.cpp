// Program to Check Whether a Number is Even

#include <iostream>
using namespace std;

void checkEven(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is even number";
    }
    else
    {
        cout << num << " is odd number";
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkEven(num);
    return 0;
}