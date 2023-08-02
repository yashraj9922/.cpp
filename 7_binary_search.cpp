// time taken by binary search is log(n) if linear search takes time = n
#include <iostream>
using namespace std;

int main()
{
    int size, temp, l = 0, mid, key;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size], h = size - 1;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element of an array: ";
        cin >> arr[i];
    }

    for (int a = 0; a < size; ++a)
    {
        for (int b = a + 1; b < size; ++b)
        {
            if (arr[a] > arr[b])
            {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    for (int s = 0; s < size; s++)
    {
        cout << arr[s] << " ";
    }

    cout << "\nEnter the element to find: ";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Element not found";
    return 0;
}
