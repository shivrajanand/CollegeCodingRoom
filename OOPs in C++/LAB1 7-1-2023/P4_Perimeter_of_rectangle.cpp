// Shivraj Anand
// Reg_no = 21105128029
// Date : 7/1/2023
/*Task : To calculate aperimeter of a rectangle*/

#include <iostream>
using namespace std;

int main()
{
    float length, breadth, perimeter;
    cout << "Enter length of rectangle without units: ";
    cin >> length;
    cout << "Enter breadth of rectangle without units: ";
    cin >> breadth;
    perimeter = 2 * (length + breadth);

    cout << "perimeter of rectangle is " << perimeter << " units";

    return 0;
}
