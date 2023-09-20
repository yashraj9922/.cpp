#include <iostream>
using namespace std;

int iteration(int num)
{
    int fib = 0, a = 0, b = 1;
    for (int i = 1; i < num; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int recursion(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return recursion(num - 1) + recursion(num - 2);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Fibonacci of " << num << " using iteration is " << iteration(num) << endl;
    cout << "Fibonacci of " << num << " using recursion is " << recursion(num) << endl;
    return 0;
}