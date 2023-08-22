// find the max and min num in an array
#include <iostream>
using namespace std;

int maximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minimum(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

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

    cout << "Maximum element of an array " << maximum(arr, size) << endl;
    cout << "Minimum element of an array " << minimum(arr, size) << endl;

    return 0;
}
