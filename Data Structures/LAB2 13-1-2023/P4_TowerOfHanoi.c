// Shivraj Anand
// Reg_no = 21105128029
// Date : 13/1/2023
/*Task : To simulate the working of tower of hanoi for n disks using recursion in c and print the number of moves*/

#include <stdio.h>
#include <math.h>
void TOH(int n, char x, char y, char z);

int main()
{
    int n;
    printf("Input number of rings in tower: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');
    int steps = (pow(2, n)-1);
    printf("Total number of steps: %d", steps);
}

void TOH(int n, char x, char y, char z)
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y);
        printf("%c to %c\n", x, y);
        TOH(n - 1, z, y, x);
    }
}