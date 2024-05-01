#include<iostream>
using namespace std;
bool isLeapYear(int year)
{
    if(year%4==0 and year%100!=0)
    {
        return true;
    }
    else if(year%400==0 )
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(isLeapYear(year))
    {
        cout<<"Yes, it's a leap year";
    }
    else{
        cout<<"No, it's not a leap Year";
    }
    return 0;
}