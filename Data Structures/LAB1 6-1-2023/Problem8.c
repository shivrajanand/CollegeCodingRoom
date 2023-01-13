// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : (i) Demonstrate passing functions to a pointer (ii) Demonstrate returning pointer from a function*/

#include <stdio.h>

int* sum(int *a, int *b);

int main()
{
    int num1, num2;
    int *num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    num3 = sum(&num1, &num2);
    // printf("num3 = %d\n", num3);
    // printf("*num3 = %d\n", *num3);

    printf("Sum of %d and %d is %d", num1, num2, *num3);

    return 0;
}

int* sum(int *a, int *b)
{
    static int sum;
    // I was geeting error so i applied static keyword to avoid segmentation error
    // Static variable will preserve it value even out of scope
    sum = *a + *b;
    // printf("sum = %d\n", sum);
    // printf("&sum = %d\n", &sum);
    return &sum;
}