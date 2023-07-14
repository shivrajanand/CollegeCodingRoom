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

    Distance add_dist(Distance d)
    {
        Distance result;
        result.inch = inch + d.inch;
        result.feet = 0;
        if (result.inch >= 12)
        {
            result.inch = result.inch - 12;
            result.feet++;
        }
        result.feet = feet + d.feet + result.feet;

        return result;
    }
};

int main()
{
    Distance d1(2, 4.5), d2(3, 8.5), d3;
    d3 = d2.add_dist(d1);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}