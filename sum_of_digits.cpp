//Program to find sum of digits
#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum, temp;
    while(num!=0){
        temp = num%10;
        sum+=temp;
        num=num/10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int ans = sumOfDigits(num);
    cout<<ans;
}