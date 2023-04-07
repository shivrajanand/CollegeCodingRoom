#include <iostream>
using namespace std;

class Alpha
{
private:
    int id;

public:
    Alpha() { id = 0; }            // Default Constructor
    Alpha(int x) { id = x; }       // Parameterised Constructor
    Alpha(Alpha &y) { id = y.id; } // User defined copy constructor
    // Alpha(Alpha y) { id = y.id; } // User defined copy constructor but implemented using pass by value
    void display() { cout << "ID= " << id << endl; }
};

int main()
{
    Alpha a(10);
    Alpha b(a);
    a.display();
    b.display();
    return 0;
}