#include <iostream>
using namespace std;

struct mystructure
{
    int a;
    float b;
    char c;
    int *d = &a;
    float *e = &b;
    char *f = &c;
};

int main()
{
    struct mystructure x1, x2;
    struct mystructure *y1 = &x1, *y2 = &x2;
    x1.a = 2;
    x2.a = 3;
    x1.b = 2.1;
    x2.b = 3.1;
    x1.c = 'm';
    x2.c = 'n';

    cout << "x1.a: "
         << "Address = " << y1->d << " Value= " << *y1->d << endl;
    cout << "x1.b: "
         << "Address = " << y1->e << " Value= " << *y1->e << endl;
    cout << "x1.c: "
         << "Address = " << &y1->f << " Value= " << *y1->f << endl;
    cout << "x2.a: "
         << "Address = " << y2->d << " Value= " << *y2->d << endl;
    cout << "x2.b: "
         << "Address = " << y2->e << " Value= " << *y2->e << endl;
    cout << "x2.c: "
         << "Address = " << &y2->f << " Value= " << *y2->f << endl;

    return 0;
}