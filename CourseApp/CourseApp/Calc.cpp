#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

double calc(double x)
{

	double y = ((pow(sin(x), 3) + pow(cos(x), 3))*log(x));
	return y;

}
int taskA (double xn, double xk, double dx,double *&y)
{
	int n = (xk - xn)/dx + 1;
	y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		double u = calc(x);
		y[i] = u;
		i++;
	}
	return n;

}
int taskB(double *x, int size,double *&y1)
{
	y1 = new double[size];
	for (int i = 0;i < size;i++)
	{
		double c = calc(x[i]);
		y1[i] = c;
	}
	return(size);
}