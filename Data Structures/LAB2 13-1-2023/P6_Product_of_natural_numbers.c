// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To find product of two natural numbers using recursion in c*/

#include <stdio.h>

int product(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("product is: %d", product(num1, num2));
    return 0;
}

int product(int a, int b)
{
    if (a < b)
        return product(b, a);
    else if (b != 0)
        return (a + product(a, b-1));
    else    
        return 0;
}