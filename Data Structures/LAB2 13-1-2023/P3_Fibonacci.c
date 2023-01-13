// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To display fibonacci series using recursion in c*/

#include <stdio.h>

int fibonacci(int n);

int main()
{
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++)
        printf("%d, ", fibonacci(i));
    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}