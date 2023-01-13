// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Find the sum of given n numbers using a 1D array. Use a function to display the sum of elements in the array and main program to display the sum*/

#include <stdio.h>

int array_sum(int *arr, int n);

int main()
{
    int n;
    printf("Enter number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("Sum for given list is : %d", array_sum(arr, n));
    return 0;
}

int array_sum(int *arr, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}