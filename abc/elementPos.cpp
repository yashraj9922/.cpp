// print an element at given position

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

    int pos;
    cout << "Enter the position of element you want to print ";
    cin >> pos;

    cout << "Element at position " << pos << " is " << arr[pos - 1] << endl;

    return 0;
}