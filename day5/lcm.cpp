#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    int min;
    if(a<b)
    {
        min=a;
    }
    else{
        min=b;
    }
    while(min!=0)
    {
        if(a%min==0 and b%min==0)
        {
            return min;
        }
        min--;
    }
}

int lcmOfaNum(int a,int b)
{
    return (a*b)/hcf(a,b);
}

int main()
{
    int a,b;
    cout<<"Enter 2 number: ";
    cin>>a>>b;
    int lcm=lcmOfaNum(a,b);
    cout<<lcm;

    return 0;
}