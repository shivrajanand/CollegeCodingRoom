// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To find gcd of two given numbers using recursion in c*/

#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("gcd of %d and %d is %d", num1, num2, gcd(num1, num2));

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}