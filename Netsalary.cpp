#include <iostream>
using namespace std;

int main()
{
    float basic;
    float percentallowed;
    float percentdeduct;
    float netsalary;

    cout<<"Enter the basic amount";
    cin>>basic;
    cout<<"Enter the amount of the percent allowed";
    cin>>percentallowed;
    cout<<"Enter the amount of the percent deducted";
    cin>>percentdeduct;

    netsalary=basic+basic*percentallowed/100-basic*percentdeduct/100;
    cout<<"Net salary is"<<netsalary<<endl;
}