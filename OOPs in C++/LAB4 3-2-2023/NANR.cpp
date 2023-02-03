// Shivraj Anand
// Reg_no = 21105128029
// Date : 3/2/2023
/*Task : Write a program in C++ to demonstrate function no argument no return*/

#include <iostream>
using namespace std;

void simple();

int main()
{
    simple();
    return 0;
}

void simple()
{
    float principle, rate, time, si;
    cout << "Enter Principle: ";
    cin >> principle;
    cout << "Enter Rate: ";
    cin >> rate;
    cout << "Enter Time: ";
    cin >> time;
    si = (principle * rate * time) / 100;
    cout << "Simple intrest is: " << si;
}