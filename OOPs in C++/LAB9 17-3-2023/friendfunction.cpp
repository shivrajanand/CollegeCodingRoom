#include <iostream>
using namespace std;

class beta;

class alpha
{
    int data;

public:
    alpha()
    {
        data = 7;
    }
    friend int myfriend(alpha, beta);
};

class beta
{
    int data;

public:
    beta()
    {
        data = 9;
    }
    friend int myfriend(alpha, beta);
};

int myfriend(alpha a, beta b)
{
    return (a.data + b.data);
}

int main()
{
    alpha A;
    beta B;
    cout << "friend value = " << myfriend(A, B);
    return 0;
}