// Program to find second maximum and second minimum element in an array
//recheck this code
#include <iostream>
using namespace std;

int secondMax(int arr[], int size)
{
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int secondMin(int arr[], int size)
{
    int min = arr[0];
    int secondMin = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] > secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
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

    cout << "Second maximum element of an array " << secondMax(arr, size) << endl;
    cout << "Second minimum element of an array " << secondMin(arr, size) << endl;

    return 0;
}