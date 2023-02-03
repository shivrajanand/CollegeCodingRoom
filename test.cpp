#include <iostream>
#include <math.h>
using namespace std;
int armstrong(int num);
int power_val;
int main()
{
    cout << armstrong(153);
    return 0;
}

int armstrong(int num)
{
    int temp1, temp2, power = 0, sum = 0, digit;
    temp1 = num;
    temp2 = num;
    cout << "temp1= " << temp1<< " Temp2 = "<< temp2<< endl;
    cout << "getting number o digits"<<endl;
    while (temp1 != 0)
    {
        power++;
        temp1 = temp1 / 10;
    }
    cout<<"power = "<<power<<endl;

    cout << "Finding sum"<<endl;
    while (temp2 != 0)
    {
        cout<< endl<< " " << "NEW INTERATION" << endl;
        cout << "temp2 = "<<temp2<<endl;
        digit = temp2 % 10;
        cout << "digit = "<<digit<<endl;
        cout << "power value = "<<pow(digit, power)<<endl;
        cout << "Old sum = "<<sum<<endl;
        power_val = pow(digit, power);
        cout << "After power value = "<<power_val<<endl;
        sum = sum + power_val;
        cout << "New sum = "<<sum<<endl;
        temp2 = temp2 / 10;
        
    }
    cout << "sum = "<<sum<<endl;

    if (sum == num)
        return 1;
    else
        return 0;
}