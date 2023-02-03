// Shivraj Anand
// Reg_no = 21105128029
// Date : 3/2/2023
/*Task : Write a program in C++ to demonstrate function no argument with return*/

#include <iostream>
using namespace std;

float simple();

int main()
{
    float si = simple();
    cout << "Simple intrest is: " << si;
    return 0;
}

float simple()
{
    float principle, rate, time;
    cout << "Enter Principle: ";
    cin >> principle;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter Time: ";
    cin >> time;
    return (principle * rate * time) / 100;
}