// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Implement Linear search on a list of integers*/

#include <stdio.h>

int linear_search(int arr[], int n, int key);

int main()
{
    int n, key, found;
    printf("Enter number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to be searched: ");
    scanf("%d", &key);

    found = linear_search(arr, n, key);

    if (found < 0)
        printf("Sorry Element not found");
    else
        printf("Element found at index %d", found);

    return 0;
}

int linear_search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
