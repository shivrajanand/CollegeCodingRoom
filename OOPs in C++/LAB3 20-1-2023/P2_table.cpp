// Shivraj Anand
// Reg_no = 21105128029
// Date : 20/1/2023
/*Task : Write a program to print table from 1 to 10 in a tabulated form*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float i, num;

    for (i = 1; i <= 10; i++)
    {
        for (num = 1; num <= 10; num++)
        {
            cout << setw(2) << num << setw(2) << "x" << setw(2) << i << setw(2) << "=" << setw(2) << num * i << setw(2) << " " << setw(2);
        }
        cout << endl;
    }
    return 0;
}
