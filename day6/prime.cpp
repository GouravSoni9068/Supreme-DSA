#include<iostream>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<num-1;i++)
    {
        if(num%i==0)
        {
            return false;
        }

    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    if(isPrime(num))
    {
        cout<<"Yes, it's a Prime Number";
    }
    else{
        cout<<"No, it's not a prime Number";
    }

    return 0;
}