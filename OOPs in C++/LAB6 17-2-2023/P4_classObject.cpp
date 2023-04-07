#include <iostream>
using namespace std;

class Complex
{
public:
    float real;
    float img;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex addcomplex(Complex a, Complex b)
    {
        Complex res;
        res.real = a.real + b.real;
        res.img = a.img + b.img;

        return res;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3;
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    c3 = c3.addcomplex(c1, c2);
    cout << "Result of addition is: ";
    c3.display();

    return 0;
}