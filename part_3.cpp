#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
    double k, g, res;
    puts("Input k, g");
    scanf("%lf %lf", &k, &g);
    res = pow(k, 2) + (g - k) / 2.3;

    printf("k=%6.2f, g=%6.2f res=%4.3f\n", k, g, res);
    system("pause");
    return 0;
}
