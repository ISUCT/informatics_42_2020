#include <iostream>
#include <math.h>

using namespace std;

double func(double x, double a)
{
    double y = pow(a,pow(x,2)-1) - log10(pow(x,2)-1) + pow(pow(x,2)-1, 1/3.0);
    return y;
}
int lengthA(double xn, double xk, double dx)
{
    int n = (xk-xn)/dx + 1;
    return n;
}
int taskA(double a, double xn, double xk, double dx, double *&y1)
{
    int i = 0;
    int n = lengthA(1.2,3.7,0.5);
    y1 = new double [n];
    for(double x = xn; x <= xk; x += dx)
    {
        double y = func(a,x);
        y1[i] = y;
        i++;
    }
    return n;
}
void coutA(int n, double *&y1)
{
    for (int i = 0; i < n; i++)
    {
        cout << y1[i] << endl;
    }
}
int taskB(double a, double *xs, int size, double *&y2)
{
    y2 = new double [size];
    for (int i = 0 ; i < size; i++)
    {
        double x = xs[i];
        double y = func(a,x);
        y2[i] = y;
    }
    return size;
}
void coutB(int size, double *&y2)
{
    cout << "\n" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << y2[i] << endl;
    }
}