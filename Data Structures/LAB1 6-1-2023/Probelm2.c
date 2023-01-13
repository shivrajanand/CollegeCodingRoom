// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Sort given list of n intergers into ascending order using selection sort. Use a function to sort*/

#include <stdio.h>

void swap(int *x, int *y);
void selectionSort(int arr[], int n);
void printArray(int arr[], int n);

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
    printf("Unsorted List is : ");
    printArray(arr, n);
    printf("Sorted List is : ");
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}