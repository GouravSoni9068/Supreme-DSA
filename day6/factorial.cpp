#include<iostream>
using namespace std;
int factorial(int num)
{
    int ans=1;
    for(int i=num;i>0;i--)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int ans=factorial(num);
    cout<<"Factorial of a "<<num<<" is "<<ans;
    
    return 0;
}