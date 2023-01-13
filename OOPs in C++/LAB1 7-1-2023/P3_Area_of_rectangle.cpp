// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate area of a rectangle*/

#include <iostream>
using namespace std;

int main()
{
    float length, breadth, area;
    cout << "Enter length of rectangle without units: ";
    cin >> length;
    cout << "Enter breadth of rectangle without units: ";
    cin >> breadth;
    area = length * breadth;

    cout << "Area of rectangle is " << area<<" squared units";

    return 0;
}