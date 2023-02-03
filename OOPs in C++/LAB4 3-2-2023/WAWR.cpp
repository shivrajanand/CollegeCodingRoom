// Shivraj Anand
// Reg_no = 21105128029
// Date : 3/2/2023
/*Task : Write a program in C++ to demonstrate function with argument with return*/

#include <iostream>
using namespace std;

float simple(float p, float r, float t);

int main()
{
    float principle, rate, time, si;
    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Time: ";
    cin>>time;

    si = simple(principle, rate, time);

    cout<<"Simple intrest: "<<si;
    
    return 0;
}

float simple(float p, float r, float t)
{
    return (p*r*t)/100;
}