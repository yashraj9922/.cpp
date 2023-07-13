#include <iostream>
using namespace std;

int main()
{
    string name;
    // cout<<"Enter your name ";
    // cin>>name;
    // cout<<"Welcome "<<name;

    cout<<"\nEnter your name ";
    getline(cin, name);
    cout<<"Hello "<<name;
    return 0;
}