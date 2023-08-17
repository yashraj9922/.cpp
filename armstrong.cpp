// Program to Check Armstrong Number
#include <iostream>
#include <math.h>
using namespace std;

int powerCount(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int amstrongNumBtw1to1000()
{
    for (int i = 1; i <= 1000; i++)
    {
        int sum = 0;
        int originalNum = i;
        int temp = i; // Use a separate variable for the loop iteration
        while (temp > 0)
        {
            int lastDigit = temp % 10;
            sum += pow(lastDigit, powerCount(originalNum));
            temp = temp / 10;
        }
        if (sum == originalNum)
        {
            cout << originalNum << endl;
        }
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = 0;
    int originalNum = num;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum += pow(lastDigit, powerCount(originalNum));
        num = num / 10;
    }
    if (sum == originalNum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }
    amstrongNumBtw1to1000();
    return 0;
}
