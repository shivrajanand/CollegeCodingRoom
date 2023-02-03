// Shivraj Anand
// Reg_no = 21105128029
// Date : 20/1/2023
/*Task : Write a program in C++ to demonstrate menu driven program*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

void circle();
void rectangle();
void square();
void triangle();

int main()
{
    int choice;

    while (true)
    {

        system("cls");
        cout << "1.Area of circle" << endl;
        cout << "2.Area of rectangle" << endl;
        cout << "3.Area of square" << endl;
        cout << "4.Area of triangle" << endl;
        cout << "5.EXIT" << endl;

        cout << "Enter choice between 1 to 4: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            circle();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            square();
            break;
        case 4:
            triangle();
            break;
        case 5:
            exit(0);
        default:
            cout << "Wrong choice";
        }
        char input;
        cout << endl
             << endl
             << "Press E to continue ";
        cin >> input;
    }
    return 0;
}

void circle()
{
    const float PI = 3.14;
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle is: " << (PI * radius * radius);
}

void rectangle()
{
    float length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Area of rectangle is: " << (length * breadth);
}

void square()
{
    float side;
    cout << "Enter side of sqaure: ";
    cin >> side;
    cout << "Area of square is: " << (side * side);
}

void triangle()
{
    float a, b, c;
    cout << "Enter first side of triangle: ";
    cin >> a;
    cout << "Enter second side of triangle: ";
    cin >> b;
    cout << "Enter third side of triangle: ";
    cin >> c;
    float s = (a + b + c) / 2;
    cout << "Area of triangle is: " << sqrt((s * (s - a) * (s - b) * (s - c)));
}