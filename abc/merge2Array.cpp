// merege 2 Arrays

#include <iostream>
using namespace std;

int main()
{
    int size1;
    cout << "Enter the size of an array1 ";
    cin >> size1;
    int arr1[size1];

    for (int j = 0; j < size1; j++)
    {
        cout << "Enter the element of array1 ";
        cin >> arr1[j];
    }

    int size2;
    cout << "Enter the size of an array2 ";
    cin >> size2;
    int arr2[size2];

    for (int j = 0; j < size2; j++)
    {
        cout << "Enter the element of array2 ";
        cin >> arr2[j];
    }

    int size3 = size1 + size2;
    int arr3[size3];

    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];
    }

    cout << "Merged array is ";
    for (int i = 0; i < size3; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}