#include <iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 3, 4, 5};
    for(auto i:arr)
    {
        cout<<i<<endl;
    }
    cout<<"\n";
    float a[]={1, 2.2, 3.4, 5.8, 7.1};
    for(auto i:a)
    {
        cout<<i<<endl;
    }
    return 0;
}