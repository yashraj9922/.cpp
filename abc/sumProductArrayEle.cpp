// program to find sum and product of all elements of an array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array ";
    cin >> size;
    int arr[size];

    for (int j = 0; j < size; j++)
    {
        cout << "Enter the element of array ";
        cin >> arr[j];
    }

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of all elements of an array is " << sum << endl;
    cout << "Product of all elements of an array is " << product << endl;

    return 0;
}