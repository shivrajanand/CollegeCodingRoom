// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : Write a program to print all armstrong numbers between 1 to 500*/

#include <iostream>
#include <math.h>
using namespace std;
int armstrong(int num);
int power(int base, int exp);

int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (armstrong(i) == 1)
            cout << i << ", ";
    }
    // cout << armstrong(153);
    return 0;
}

int power(int base, int exp)
{
    int value = 1;
    for (int i = 1; i <= exp; i++)
        value = value * base;

    return value;
}

int armstrong(int num)
{
    int temp1, temp2, pow = 0, sum = 0, digit;
    temp1 = num;
    temp2 = num;

    while (temp1 != 0)
    {
        pow++;
        temp1 = temp1 / 10;
    }

    while (temp2 != 0)
    {
        digit = temp2 % 10;
        sum = sum + power(digit, pow);
        temp2 = temp2 / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}