#include <iostream>
#include <cmath>
#include "func.h"

int main()
{
    double a = 1.6;
    double xn = 1.7;
    double xk = 3.7;
    double dx = 0.5;
    taskA(a,xn,xk,dx);
    double  xs[] = {1.28, 1.36, 2.47, 3.68, 4.56};
    int size = sizeof(xs)/sizeof(xs[0]);
    taskB(a,xs,size);
    int end;
    std::cin>> end;
    return 0;
}