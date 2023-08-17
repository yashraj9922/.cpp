//Program to Find the One’s Complement of Positive Integer
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "One's complement of " << num << " is: " << ~num;
    return 0;
}