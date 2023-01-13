// Shivraj Anand
// Reg_no = 21105128029
// Date : 6/1/2023
/*Task : Find the sum of two matrices usin a function named add and suitable parameters*/

#include <stdio.h>

int rows, cols;

void sum(int matrix1[][100], int matrix2[][100], int sum_matrix[][100]);
void input_array(int matrix[][100]);
void printArray(int arr[][100]);

int main()
{
    int matrix1[100][100], matrix2[100][100];
    int matrix3[100][100], i, j;

    printf("Enter the no of rows Limit -> 100: ");
    scanf("%d", &rows);
    printf("Enter the no of cols Limit -> 100: ");
    scanf("%d", &cols);

    printf("\nEnter the input for matrix1:\n");
    input_array(matrix1);

    printf("\nEnter the input for matrix2:\n");
    input_array(matrix2);

    sum(matrix1, matrix2, matrix3);

    printf("\nMatrix 1:\n");
    printArray(matrix1);

    printf("\nMatrix 2:\n");
    printArray(matrix2);

    printf("\nResult of Matrix Addition:\n");
    printArray(matrix3);
    return 0;
}

void sum(int matrix1[][100], int matrix2[][100], int sum_matrix[][100])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printArray(int arr[][100])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void input_array(int matrix[][100])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter value for element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}