// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : Input age from user and check if they are eligible to vote in C++*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Input age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligibe to vote";
    else
        cout << "Not eligible to vote";
    return 0;
}