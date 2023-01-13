// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate surface area of a cube*/

#include <iostream>

using namespace std;

int main()
{
    float side, s_area;
    cout << "Enter the side of cube without units: ";
    cin >> side;

    s_area = 6 * side * side;

    cout << "Surface are of cube is " << s_area << " squared units";

    return 0;
}