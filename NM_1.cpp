#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x=0.5;
    double true_value=exp(x);
    double approx_2_terms=1+x;
    double approx_3_terms=approx_2_terms+(x*x)/2.0;
    double approx_4_terms=approx_3_terms+(x*x*x)/6.0;
    cout<<"True value of e^0.5:"<<true_value<<endl;
    cout<<"approx with 2terms:"<<approx_2_terms<<",eror:"<<fabs(true_value-approx_2_terms)<<endl;
    cout<<"approx with 3terms:"<<approx_3_terms<<",eror:"<<fabs(true_value-approx_3_terms)<<endl;
    cout<<"approx with 4terms:"<<approx_4_terms<<",eror:"<<fabs(true_value-approx_4_terms)<<endl;

}

