#include<iostream>
#include<cmath>
using namespace std;

void reverseTheNum(int &num)
{
    int sum=0;
    
    int temp=num;
    while(num!=0){
        int rem=num%10;

        sum=sum*10+rem;
        num/=10;
    }
    num=sum;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    reverseTheNum(num);
    cout<<num;
    return 0;
}

