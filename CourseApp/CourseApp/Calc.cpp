#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;
void taskA(double xn, double xk, double dx, double a, double b)
{
	int n = (xk - xn) / dx;
	double *y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx) {
		y[i] = calc(x,a,b);
		cout << y[i] << endl;
		i++;
	}
	return;

}
void taskB(double *x, int size, double a, double b)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(x[i],a,b);
		cout << x[i] << y << endl;
	}
}
double calc(double x,double a, double b)
{

	double y1 = a + pow(tan(b*x), 2);
	double y2 = b + pow((1 / tan(a*x)), 2);
	return y1 / y2;
}