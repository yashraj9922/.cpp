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

    int max = arr[0];
    for (int l = 0; l < size; l++)
    {
        if (arr[l] > max)
        {
            max = arr[l];
        }
    }

    cout << "Maximum element of an array " << max;

    return 0;
}