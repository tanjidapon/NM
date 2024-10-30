#include<iostream>
using namespace std;
int main()
{
    double sum=0.0;
    double increament=0;
    for (int i=0;i<10;++i)
    {
        sum+=increament;
    }
    cout<<"sum of 0.1 added 10 times:"<<sum<<endl;
    if(sum==1.0)
    {
        cout<<"The sum is exactly 1.0"<<endl;
    }
    else{cout<<"The sum is not exactly 1.0 due to round-off error"<<endl; }
    if(sum==1)
    {
        cout<<"the sum is exactly 1.0"<<endl;
    }
    else{cout<<"The sum is not exactly 1.0 due to round-off error"<<endl; }
}
