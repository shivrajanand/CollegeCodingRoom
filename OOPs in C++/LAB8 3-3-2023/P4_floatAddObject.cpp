#include <iostream>
using namespace std;

class Distance
{
private:
    float inch;
    int feet;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int x, float y)
    {
        feet = x;
        inch = y;
    }
    void display()
    {
        cout << "Feet = " << feet << " Inch = " << inch << endl;
    }

    friend Distance operator+(float f, const Distance &d);
};

Distance operator+(float f, const Distance &d)
{
    Distance result;
    int ffeet = (int)f;
    float finch = (f - ffeet)*12;
    result.inch = finch + d.inch;
    result.feet = 0;
    if (result.inch >= 12)
    {
        result.inch = result.inch - 12;
        result.feet++;
    }
    result.feet = ffeet + d.feet + result.feet;

    return result;
}

int main()
{
    Distance d1(2, 4.6), d2;
    d2 = 2.9+d1;
    d1.display();
    d2.display();
    return 0;
}