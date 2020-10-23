#include <iostream>
#include <math.h>
#include <string>
using namespace std;


double calc(double a, double b, double x)
{
    double numenator = a * pow(x, 1 / 3.0) - b * log(x) / log(5);
    double denominator = pow(log(x - 1) / log(10), 3);
    double y = numenator / denominator;
    return y;
}

double calc(double x)
{
    const double a = 4.1;
    const double b = 2.7;
    return calc(a, b, x);
}


void taskA(double a, double b, double xn, double xk, double dx)
{
    for (double x = xn; x <= xk; x += dx)
    {
        double y = calc(a, b, x);
        cout << x << "\t" << y << endl;
    }
    return;
}
void taskB(double a, double b, double* x, int size)
{
    for (int i = 0; i < size; i++)
    {
        double y = calc(a, b, x[i]);
        char result[80];
        sprintf_s(result, "x = %.3f y = %.3f \n", x[i], y);
        cout << result << endl;
    }
}