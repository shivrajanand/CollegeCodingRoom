// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate volume of cuboid*/

#include <iostream>

using namespace std;

int main()
{
    float length, breadth, height, volume;
    cout << "Enter length of cuboid: ";
    cin >> length;
    cout << "Enter breadth of cuboid: ";
    cin >> breadth;
    cout << "Enter height of cuboid: ";
    cin >> height;

    volume = length * breadth * height;

    cout << "Volume of cuboid is " << volume<< " cubic units";
    return 0;
}