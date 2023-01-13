// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate circumference of a circle*/

#include <iostream>
using namespace std;

int main()
{
    float radius, circumference;
    float pi = 3.14;
    cout << "Enter radius of circle without units: ";
    cin >> radius;
    circumference = 2 * pi * radius;

    cout << "Circumference of circle is " << circumference<<" units";

    return 0;
}