// Program to Check if a Number is Divisible by Second Number
#include <iostream>
using namespace std;

void checkDivisible(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        cout << num1 << " is divisible by " << num2;
    }
    else
    {
        cout << num1 << " is not divisible by " << num2;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    checkDivisible(num1, num2);
    return 0;
}