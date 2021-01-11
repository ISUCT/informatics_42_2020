#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

double calc(double a, double b, double x) 
{
    double y = (log(abs(sqrt(b)) - sqrt(x)) / log(a)) / (pow(abs(sqrt(x) - sqrt(a)), 1 / 5));
    return y;
}

int taskA(double a, double b, double xn, double xk, double dx, double *&y) 
{
    int k = 0;
    int n = (xk - xn) /dx + 1;
    y = new double[n];
    for (double i = xn; i <= xk; i += dx) 
    {
        double u = calc(a, b, i);
        y[k] = u;
        k++;
    }
    return n;
}

int taskB(double a, double b, double* x, int size, double *&y1) 
{
    y1 = new double[size];
    for (int i = 0; i < size; i++) 
    {
        double u = calc(a, b, x[i]);
        y1[i] = u;
    }
    return size;
}