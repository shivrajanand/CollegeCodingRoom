// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To convert a decimal number into binary number using recursion in c*/

#include <stdio.h>

int decimal_to_binary(int decimal_number);

int main()
{
    int num;
    printf("Input Decimal number: ");
    scanf("%d", &num);
    // printf("%d", decimal_to_binary(num));
    decimal_to_binary(num);
    return 0;
}

int decimal_to_binary(int decimal_number)
{
    for (int i = 31; i >= 0; i--)
    {
        int k = decimal_number >> i;
        if (k & i)
            printf("1");
        else
            printf("0");
    }
}