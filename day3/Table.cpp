#include<iostream>
using namespace std;
void PrintTable(int num)
{
    for(int i=1;i<=10;i++)
    {
        cout<<num*i<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    PrintTable(num);
    return 0;
}