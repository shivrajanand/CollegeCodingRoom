// Shivraj Anand
// Reg_no = 21105128029
// Date : 3/2/2023
/*Task : Write a program in C++ to demonstrate function with argument no return*/

#include <iostream>
using namespace std;

void simple(float p, float r, float t);

int main()
{
    float principle, rate, time, si;
    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Time: ";
    cin>>time;

    simple(principle, rate, time);
    
    return 0;
}

void simple(float p, float r, float t)
{
    float si =  (p*r*t)/100;
    cout<<"Simple intrest is: "<<si;
}