#include<iostream>
using namespace std;
int simpleInterest(int principal,int interest,int TimePeriod)
{
    int SI=(principal*interest*TimePeriod)/100;
    return SI;
}
int main()
{
    int principal,interest,TimePeriod;
    cout<<"Enter principal amount: ";
    cin>>principal;

    cout<<"Enter interest: ";
    cin>>interest;

    cout<<"Enter TimePeriod in year: ";
    cin>>TimePeriod;
    cout<<simpleInterest(principal,interest,TimePeriod);

    return 0;
}