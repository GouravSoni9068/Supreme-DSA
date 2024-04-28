#include<iostream>
using namespace std;
int largestbwThree(int first,int second,int third)
{
    if(first>second)
    {
        if(first>second)
        {
            return first;
        }
        else{
            return second;
        }
    }
    else{
        if(second>third)
        {
            return second;

        }
        else{
            return third;
        }
    }
}
int main()
{
    int first,second,third;
    cout<<"Enter 3 number: ";
    cin>>first>>second>>third;
    cout<<"largest bw "<<first<<","<<second<<","<<third<<" is: "<<largestbwThree(first,second,third);

    return 0;
}