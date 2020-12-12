#include <iostream>
#include <math.h>
#include "header.h"
using namespace std;

double calc(double a, double x)
{
	double numenator = pow(log(a + x), 2);
	double denominator = pow((a + x), 2);
	double y = numenator / denominator;
	return y;
}
double calc(double x)
{
	const double a = 2.0;
	return calc(a, x);
}

int taskA(double a, double xn, double xk, double dx, double*& y)
{
	int n = (int)((xk - xn) / dx) + 1;
	y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		y[i] = calc(a, x);
		i++;
	}
	return n;
}

int taskB(double a, double* x, int size, double*& y1)
{
	y1 = new double[size];
	for (int i = 0; i < size; i++)
	{
		double c = calc(a, x[i]);
		y1[i] = c;
	}
	return size;
}
