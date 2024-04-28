#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a num: ";
    cin>>num;
    if(num&1)
    {
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
    return 0;
}