#include <iostream>
using namespace std;

int sum_and_avg(int *arr, int &sum, int &avg);

int main()
{
    int list[] = {1, 2, 3, 4, 5};
    int summation, average;

    sum_and_avg(list, summation, average);

    cout << "SUM = " << summation << " AVERAGE = " << average;
    return 0;
}
int sum_and_avg(int *arr, int &sum, int &avg)
{
    sum = 0;

    for (int i = 0; i < 5; i++)
        sum += arr[i];

    avg = sum / 5;
}