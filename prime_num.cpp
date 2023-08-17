// program to find a prime no.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime number";
            break;
        }
    }
    if (i == num)
    {
        cout << "Prime number";
    }
    return 0;
}