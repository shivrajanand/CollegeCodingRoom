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
        cout << "Feet = " << feet << endl;
        cout << "inch = " << inch << endl;
    }
    Distance operator+(Distance d2)
    {
        Distance temp;
        temp.inch = inch + d2.inch;
        temp.feet = 0;
        if (temp.inch >= 12)
        {
            temp.inch = temp.inch - 12;
            temp.feet++;
        }
        temp.feet = temp.feet + d2.feet + feet;
    }
    Distance(float fd)
    {
        feet = (int)(fd);
        inch = 12 * (fd - feet);
    }
};

int main()
{
    Distance d1(2, 5.0);
    Distance d2;
    d2 = d1 + 10.5;
    d2.display();
    return 0;
}