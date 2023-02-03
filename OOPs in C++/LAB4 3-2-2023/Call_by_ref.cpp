#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    cout << "Inside Function Before Swap "
         << "x= " << *x << " "
         << "y= " << *y << endl;
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "Inside Function After Swap "
         << "x= " << *x << " "
         << "y= " << *y << endl;
}

int main()
{
    int x = 3, y = 2;
    cout << "Inside main Before Swap "
         << "x= " << x << " "
         << "y= " << y << endl;
    swap(&x, &y);
    cout << "Inside main After Swap "
         << "x= " << x << " "
         << "y= " << y << endl;

    return 0;
}