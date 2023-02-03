// Shivraj Anand
// Reg_no = 21105128029
// Date : 20/1/2023
/*Task : Write a program to print all prime numbers between 1 to 100*/

#include <iostream>
using namespace std;
int prime(int n);

int main()
{
    for (int i = 2; i <= 100; i++)
        if (prime(i) == 1)
            cout<<i<<", ";
    return 0;
}

int prime(int n)
{
    int flag = 1;

    for( int i = 2; i <= (int)n/2; i++)
    {
        if (n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;

}