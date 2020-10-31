#include <iostream>
#include <cmath>
#include "func.h"

using namespace std;

int main()
{
    double a = 1.6;
    double xn;
    double xk;
    double dx;
    int n = lengthA(1.2,3.7,0.5);
    double tmp = 10;
    double* y1;
    taskA(a,1.2,3.7,0.5,y1);
    coutA(n,y1);
    delete[] y1;
    double  xs[] = {1.28, 1.36, 2.47, 3.68, 4.56};
    int size = sizeof(xs)/sizeof(xs[0]);
    double* y2;
    taskB(a,xs,size,y2);
    coutB(size,y2);
    delete[] y2;
    return 0;
}
