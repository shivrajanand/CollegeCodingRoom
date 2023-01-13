// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : Create a calculator for basic arithmetic operations using c++*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Input first number: ";
    cin >> num1;
    cout << "Input second number: ";
    cin >> num2;
    cout << "Input operator: {+, -, /, *, %}: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '%':
        cout << num1 % num2;
        break;

    default:
        cout << "Wrong Input";
    }

    return 0;
}