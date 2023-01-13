// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate volume of a cylinder*/

#include <iostream>
using namespace std;

int main()
{
    float radius, height, volume;
    float pi = 3.14;
    cout << "Enter radius of base of cylinder without units: ";
    cin >> radius;
    cout << "Enter height of cylinder without units: ";
    cin >> height;
    volume = pi*radius*radius*height;
    cout << "volume of cylinder is " << volume<<" cubic units";

    return 0;
}