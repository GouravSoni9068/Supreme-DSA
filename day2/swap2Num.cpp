#include<iostream>
using namespace std;
void swap(int &firstNum,int &SecondNum)
{
    firstNum=firstNum+SecondNum;
    SecondNum=firstNum-SecondNum;
    firstNum-=SecondNum;
}

int main()
{
    int firstNum,secondNum;
    cout<<"Enter 1st Num: ";
    cin>>firstNum;
    cout<<"Enter 2nd Num: ";
    cin>>secondNum;
    swap(firstNum,secondNum);
    cout<<"FirstNum: "<<firstNum<<endl;
    cout<<"SecondNum: "<<secondNum<<endl;
    return 0;
}