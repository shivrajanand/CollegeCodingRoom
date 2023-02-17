#include <iostream>
using namespace std;

void doublearr(int *arr, int size);
void printarr(int *arr, int size);
int main()
{
    int list[] = {1, 2, 3, 4, 5};
    printarr(list, 5);
    doublearr(list, 5);
    printarr(list, 5);

    return 0;
}

void doublearr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

void printarr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<", ";
    }
    cout<<endl;
}