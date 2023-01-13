// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate area of a circle*/

#include <iostream>
using namespace std;

int main()
{
    float radius, area;
    float pi = 3.14;
    cout << "Enter radius of circle without units: ";
    cin >> radius;
    area = pi * radius * radius;

    cout << "Area of circle is " << area<<" squared units";

    return 0;
}