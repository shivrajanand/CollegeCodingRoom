// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Find the biggest in a list of numbers using a function*/

#include <stdio.h>

int find_greatest(int arr[], int size);

int main()
{
    int size, max;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element number [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = find_greatest(arr, size);
    printf("Maximum of the given list of numbers is %d", max);
    return 0;
}

int find_greatest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}