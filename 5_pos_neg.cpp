#include <iostream>
using namespace std;

int main()
{
    int size, pos, neg;
    cout << "Enter the size of an array";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of an array\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            neg++;
        }
    }
    cout << "Positive elements in an array " << pos << endl;
    cout << "Negative elements in an array " << neg;
    return 0;
}
