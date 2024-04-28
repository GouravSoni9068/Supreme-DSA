#include<iostream>
using namespace std;
int maxBwtwo(int a,int b)
{
    return ((a>b)? a: b);
}
int main()
{
    int a;
    int b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
   
    cout<<"max is :"<< maxBwtwo(a,b);
    return 0;
}