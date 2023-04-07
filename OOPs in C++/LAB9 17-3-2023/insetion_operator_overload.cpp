#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int mins;

public:
    Time()
    {
        hour = mins = 0;
    }

    Time(int x, int y)
    {
        hour = x;
        mins = y;
    }
    void display()
    {
        cout << "Hour: " << hour << endl;
        cout << "Minutes: " << mins << endl;
    }
    // friend void operator <<(ostream &os, Time &t);
    friend ostream &operator <<(ostream &os, Time &t);
};
// void operator <<(ostream &os, Time &t)
// {
//     os<<"Hour: "<<t.hour<<endl;
//     os<<"Minutes: "<<t.mins<<endl;
// }
ostream &operator <<(ostream &os, Time &t)
{
    // os<<"Hour: "<<t.hour<<endl;
    // os<<"Minutes: "<<t.mins<<endl;
    os<<t.hour<<":"<<t.mins<<endl;
    return os;
}
int main()
{
    Time tt(3, 40);
    tt.display();
    cout<<tt<<tt;
    return 0;
}