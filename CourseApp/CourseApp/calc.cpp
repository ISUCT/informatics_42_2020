#include <iostream>
#include <cmath>
using namespace std;

double calc(double a, double b, double x)
{
    double y = (asin(pow(x, a)) + acos(pow(x, b)));
    return y;
}

void calcA(double xn, double xk, double dx, int *pSizeA)
{ 
    int num = *pSizeA;
    for (double x = xn; x <= xk; x += dx)
    {
        num++;
    }
    *pSizeA = num;
}

void Score_taskA(double a, double b, double xn, double xk, double dx, double *ArrayA)
{
    int i = 0;
    for (double x = xn; x <= xk; x += dx)
    {
        double y = calc(a, b, x);
        ArrayA[i] = x;
        i++;
        ArrayA[i] = y;
        i++;
    }
    return;
}

void Score_taskB(double a, double b, double *x, int SizeB, double *ArrayB)
{
    int i = 0;
    for (int n = 0; n <= ((SizeB/2)-1); n++)
    {
        double y = calc(a, b, x[n]);
        ArrayB[i] = x[n];
        i++;
        ArrayB[i] = y;
        i++;
    }
    return;
}