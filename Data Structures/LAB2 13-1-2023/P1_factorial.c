// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To find factorial of a given number using recursion in c*/

#include <stdio.h>

int factorial(int n);

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}