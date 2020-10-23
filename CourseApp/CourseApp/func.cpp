#include <iostream>
#include <math.h>
using namespace std;

double func(double x, double a)
{
    double y = pow(a,pow(x,2)-1) - log10(pow(x,2)-1) + pow(pow(x,2)-1, 1/3.0);
    return y;
}
void taskA(double a, double xn, double xk, double dx)
{
    cout << "Task A" << endl;
    for(double x = xn; x <= xk; x += dx)
    {
        double y = func(a,x);
        cout << "x = "<< x << "\t" << "y = " << y << endl;
    }
    cout << "---------------------------------------" << endl;
    return;
}
void taskB(double a, double xs[], int size)
{
    cout << "Task B" << endl;
    for (int i = 0 ; i < size; i++)  
    {
        double x = xs[i];
        double y = func(a,x);
        cout << "x = "<< x << "\t" << "y = " << y << endl;
    }
    return;
}