#include<iostream>
using namespace std;

int main()
{
    long long num;
    cin>>num;
    long long bin=0;
    long long pow=1;
    while(num!=0)
    {
        int rem=num%2;
        bin+=rem*pow;
        pow*=10;
        num=num/2;
    }
    cout<<bin;
    return 0;
}