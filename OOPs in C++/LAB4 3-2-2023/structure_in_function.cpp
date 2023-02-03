#include <iostream>
using namespace std;

struct distance
{
    int feet;
    float inches;
};

struct distance calculate(struct distance x, struct distance y)
{
    struct distance result;
    result.feet = 0;
    result.inches = x.inches + y.inches;
    if (result.inches >= 12)
    {
        result.feet += 1;
        result.inches -= 12;
    }
    result.feet += x.feet + y.feet;
    return result;
}

int main()
{
    struct distance d1, d2, d3;
    cout << "Enter feet values for distance-1: " << endl;
    cin >> d1.feet;
    cout << "Enter inches values for distance-1: " << endl;
    cin >> d1.inches;
    cout << "Enter feet values for distance-2: " << endl;
    cin >> d2.feet;
    cout << "Enter inches values for distance-2: " << endl;
    cin >> d2.inches;

    d3 = calculate(d1, d2);

    cout << "Result is " << d3.feet << " feet and " << d3.inches << " inches" << endl;

    return 0;
}