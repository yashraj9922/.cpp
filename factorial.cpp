#include <iostream>
using namespace std;

int iteration(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int recursion(int num)
{
    if (num == 0)
        return 1;
    else
        return num * recursion(num - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " using iteration is " << iteration(num) << endl;
    cout << "Factorial of " << num << " using recursion is " << recursion(num) << endl;
    return 0;
}