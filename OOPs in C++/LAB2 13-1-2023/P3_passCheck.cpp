// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : Input marks from user and check if they are pass or fail in C++*/

#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Input marks: ";
    cin >> marks;

    if (marks >= 33)
        cout << "PASS";
    else
        cout << "FAIL";
    return 0;
}