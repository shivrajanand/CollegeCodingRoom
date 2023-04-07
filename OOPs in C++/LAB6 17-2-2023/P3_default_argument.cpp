#include <iostream>
using namespace std;

void sum(int a = 1, int b = 2, int c = 3)
{
    cout << "Sum is: " << (a + b + c) << endl;
}
int sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}
int main()
{
    int list[] = {1, 2, 3, 4, 5};
    sum();
    sum(11);
    sum(11, 12);
    sum(11, 12, 13);
    cout << "Sum of list is " << sum(list, 5);
    return 0;
}