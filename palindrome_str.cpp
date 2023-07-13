#include <iostream>
using namespace std;

int main()
{
    char string1[20], count = 0;
    int u, length;
    int flag = 0;
    cout<<"Enter the String ";
    cin>>string1;

    // string1 = tolower(string1);

    for (int  i = 0; string1[i]!='\0'; i++)
    {
        count++;
    }
    for(u=0; u<(count/2); u++)
    {
        if(string1[u] != string1[count-u-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<string1<<" is not a palindrome";
    }
    else
    {
        cout<<"Palindrome";
    }
    return 0;

}