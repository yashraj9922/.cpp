// Program to count number of 1s in a given number
#include <iostream>
using namespace std;

int count1(int num)
{
    int counter = 0;
    while (num != 0)
    {
        int temp = num % 10;
        if (temp == 1)
        {
            counter++;
        }
        num = num / 10;
    }
    return counter;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of 1s in " << num << " is " << count1(num) << endl;
    return 0;
}