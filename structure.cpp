#include <iostream>
using namespace std;

struct operand
{
    int a;
    float b;
    char c;
};

int main()
{
    operand op1, op2;
    int res1;
    float res2;
    char res[2];
    op1.a = 3;
    op2.a = 4;
    op1.b = 3.1;
    op2.b = 4.2;
    op1.c = 'a';
    op2.c = 'b';

    res1 = op1.a + op2.a;
    res2 = op1.b + op2.b;
    res[0] = op1.c;
    res[1] = op2.c;

    cout << res1 << " " << res2 << " " << op1.c << op2.c << endl;
    return 0;
}