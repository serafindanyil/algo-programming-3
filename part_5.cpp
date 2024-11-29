#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    short x1 = 30, x2, x3;
    unsigned short y1 = 35000, y2, y3;
    char z1 = -25, z2, z3;
    unsigned char v1 = 20, v2, v3;

    x2 = x1 + 32737;
    x3 = x2 + 1;

    printf("short value: %d %d %d\n", x1, x2, x3);

    y2 = y1 + 30535;
    y3 = y2 + 1;

    printf("unsigned short value: %d %d %d\n", y1, y2, y3);

    z2 = z1 + 152;
    z3 = z2 + 1;

    printf("char value: %d %d %d\n", z1, z2, z3);
    v2 = v1 + 235;
    v3 = v2 + 1;
    printf("unsigned char value: %d %d %d\n", v1, v2, v3);

    system("pause");
    return 0;
}
