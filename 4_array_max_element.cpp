#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array\n";
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for (auto i:arr)
    {
        if(i>max)
        {
            max = arr[i];
        }
    }
    cout<<"Max element in an array is "<<max;
    return 0;
}