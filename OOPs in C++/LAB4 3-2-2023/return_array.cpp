#include <iostream>
using namespace std;

int * too()
{
    static int num[3] = {1, 2, 3};
    return num;
}

int main()
{
    int * arr;
    arr = too();
    cout<<arr[0];
    return 0;
}

// Dangling pointer - A pointer which points to a memory location that is already lost/destroyed