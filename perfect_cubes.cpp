// Program to Print All Perfect Cubes below 1000
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int sum = 0;
        int originalNum = i;
        int temp = i; // Use a separate variable for the loop iteration
        while (temp > 0)
        {
            int lastDigit = temp % 10;
            sum += lastDigit * lastDigit * lastDigit;
            temp = temp / 10;
        }
        if (sum == originalNum)
        {
            cout << originalNum << endl;
        }
    }
    return 0;
}