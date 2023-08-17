//program to check wheather a Number is Positive or Negative
#include<iostream>
using namespace std;

void check(int num){
    if(num >= 0){
        cout<<"Positive Number";
    }
    else {
        cout<<"Negative Number";
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    check(num);
}