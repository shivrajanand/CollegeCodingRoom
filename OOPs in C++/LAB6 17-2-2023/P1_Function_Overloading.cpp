#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int list[] = {1, 2, 3, 4, 5};
    int arrsum = add(list, 5);
    int binsum = add(2, 3);

    cout << "Sum of two numbers is: " << binsum << endl;
    cout << "Sum of array elements is: " << arrsum << endl;

    return 0;
}