// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Write a program in c to add two numbers using pointers*/

#include <stdio.h>

int main()
{
    int num1, num2, *number1, *number2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    number1 = &num1;
    number2 = &num2;

    sum = *number1 + *number2;

    printf("SUM: %d", sum);

    return 0;
}