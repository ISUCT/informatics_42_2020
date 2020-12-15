#include <iostream>
#include <math.h>

using namespace std;

double func(double x, double a)
{
    double y = pow(a,pow(x,2)-1) - log10(pow(x,2)-1) + pow(pow(x,2)-1, 1/3.0);
    return y;
}
int taskA(double a, double xn, double xk, double dx, double *&arr)
{
    int i = 0;
    int size1 = (xk-xn)/dx + 1;
    arr = new double [size1]{};
    for(double x = xn; x <= xk; x += dx)
    {
        double y = func(a,x);
        arr[i] = y;
        i++;
    }
    return size1;
}
void taskB(double a, double *xs, int size2, double *&arr)
{
    arr = new double [size2];
    for (int i = 0 ; i < size2; i++)
    {
        double x = xs[i];
        double y = func(a,x);
        arr[i] = y;
    }
}
void ConsoleOut(int size, double *&arr)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
