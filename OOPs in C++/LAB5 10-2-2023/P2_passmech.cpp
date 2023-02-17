#include <iostream>
using namespace std;

void passBYvalue(int x, int y);
void passBYreferene(int *x, int *y);
void passBYaddress(int &x, int &y);

int main()
{
    int a, b;
    a = 2, b = 3;

    cout << "Before swap: "
         << "a = " << a << " b = " << b << endl;
    cout << "swapping by pass by value" << endl;
    passBYvalue(a, b);
    cout << "After swap: "
         << "a = " << a << " b = " << b << endl;
    cout << endl;
    cout << "Before swap: "
         << "a = " << a << " b = " << b << endl;
    cout << "swapping by pass by reference" << endl;
    passBYreferene(&a, &b);
    cout << "After swap: "
         << "a = " << a << " b = " << b << endl;
    cout << endl;
    cout << "Before swap: "
         << "a = " << a << " b = " << b << endl;
    cout << "swapping by pass by address" << endl;
    int *m = &a, *n = &b;
    passBYaddress(*m, *n);
    cout << "After swap: "
         << "a = " << a << " b = " << b << endl;
    return 0;
}

void passBYvalue(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
void passBYreferene(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
void passBYaddress(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
