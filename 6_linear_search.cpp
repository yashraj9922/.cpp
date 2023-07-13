#include <iostream>
using namespace std;

int main()
{
    int size, inp;
    cout<<"Enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array\n";
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to find "<<endl;
    cin>>inp;
    for(int j = 0; j<size; j++)
    {
        if(arr[j]==inp)
        {
            cout<<"Number found at index "<<j<<endl;
        }
        else
        {
            cout<<"no such number found in array";
            break;
        }
    }
    return 0;
}