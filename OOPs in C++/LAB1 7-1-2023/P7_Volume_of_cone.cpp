// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate volume of a cone*/

#include <iostream>
using namespace std;

int main()
{
    float radius, height, volume;
    float pi = 3.14;
    cout << "Enter radius of cone without unit: ";
    cin >> radius;
    cout << "Enter height of cone without unit: ";
    cin >> height;

    volume = (pi * radius * radius * height) / 3;

    cout << "volume of cone is " << volume;
    return 0;
}