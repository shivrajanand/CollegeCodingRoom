#include <iostream>
using namespace std;

inline int power(int x, int y)
{
    int power = 1;
    for (int i = 0; i < y; i++)
        power *= x;
    return power;
}
int main()
{
    int res = power(2, 3);
    cout << res;
    return 0;
}