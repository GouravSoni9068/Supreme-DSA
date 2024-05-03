#include<iostream>
using namespace std;


int gcdOfaNum(int firstNum,int secondNum)
{
    int min;
    if(firstNum<secondNum)
    {
        min=firstNum;

    }
    else{
        min=secondNum;
    }
    while(min!=0)
    {
        if(firstNum%min==0 and secondNum%min==0)
        {
            return min;
        }
        min--;
    }
}

int main()
{
    int firstNum,secondNum;
    cout<<"Enter first num: ";
    cin>>firstNum;
    cout<<"Enter Second num: ";
    cin>>secondNum;
    int gcd=gcdOfaNum(firstNum,secondNum);
    cout<<gcd;
    

    return 0;
}