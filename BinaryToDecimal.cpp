#include<iostream>
using namespace std;

int main()
{
    long long bin;
    cin>>bin;
    long long dec=0;
    long long pow=1;
    while(bin!=0)
    {
        int lastDig=bin%10;
        bin/=10;
        dec+=lastDig*pow;
        pow*=2;
    }
    cout<<dec;
    return 0;
}