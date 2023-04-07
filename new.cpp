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
        cout<<"Feet = "<<feet<<endl;
        cout<<"inch = "<<inch<<endl;
    }
    void add_dist(Distance d1, Distance d2)
    {
        inch = d1.inch + d2.inch;
        feet = 0;
        if (inch >= 12)
        {
            inch = inch - 12;
            feet++;
        }
        feet = d1.feet + d2.feet + feet;
    }
};

int main()
{
    Distance dist1(5, 6.5);
    Distance dist2(8, 8.5);
    Distance dist3;
    dist3.add_dist(dist1, dist2);
    dist1.display();
    dist2.display();
    dist3.display();
    return 0;
}