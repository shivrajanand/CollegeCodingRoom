#include <iostream>
using namespace std;

class Counter{
    private:
    int counter;

    public:
    Counter(){
        counter = 0;
    }
    Counter(int c){
        counter = c;
    }
    void operator++(){
        ++counter;
    }
    int value(){
        return counter;
    }
};

int main()
{
    Counter c1(3);
    cout<<c1.value()<<endl;
    ++c1;
    cout<<c1.value()<<endl;
    return 0;
}