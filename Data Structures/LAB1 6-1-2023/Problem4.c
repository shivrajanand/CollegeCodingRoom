// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Implement Binary search on a list of integers*/

#include <stdio.h>

int binary_search(int arr[], int n, int key);

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

    found = binary_search(arr, n, key);

    if (found > (n - 1))
        printf("Sorry Element not found");
    else
        printf("Element found at index %d", found);

    return 0;
}

int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n;
    
    while (low != high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    // return -1;
}