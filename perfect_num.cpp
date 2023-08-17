//Program to Check Whether a Given Number is Perfect Number
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        cout << "Perfect Number" << endl;
    }
    else
    {
        cout << "Not a Perfect Number" << endl;
    }
    return 0;
}