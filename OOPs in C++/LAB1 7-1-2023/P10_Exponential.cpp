// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate exponential values using math.h header file*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float base, power, result;

    cout << "Input the base value: ";
    cin >> base;
    cout << "Input the power value: ";
    cin >> power;
    result = pow(base, power);
    cout << base << " raise to power " << power << " is " << result;
    return 0;
}