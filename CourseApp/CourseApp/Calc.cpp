#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

double calc(double a, double b, double x) 
{
    double y = (log(abs(sqrt(b)) - sqrt(x)) / log(a)) / (pow(abs(sqrt(x) - sqrt(a)), 1 / 5));
    return y;
}

void taskA(double a, double b, double xn, double xk, double dx) 
{
    for (double i = xn; i <= xk; i += dx) 
    {
        double y = calc(a, b, i);
        cout << i << "\t" << y << endl;
    }
    return;
}

void taskB(double a, double b, double* x, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        double y = calc(a, b, x[i]);
        cout << x[i] << "\t" << y << endl;
    }
}