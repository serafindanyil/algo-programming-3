#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, l;
    std::cout << "Input the radius of circle\n";
    std::cin >> r;

    l = 2 * M_PI * r;

    std::cout << "Length of sircle = " << l;

    printf("%f", l);
    system("pause");
    return 0;
}