#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double calc(double x)
{
	double y = pow(abs(pow(x, 2) - 2.5), 0.25) - pow(log10(pow(x, 2)), 1 / 3);
	return y;
}

int taskA(double xn, double xk, double dx, double *&y)
{
	int p = 0;
	int n = (xk - xn)/dx+1;
	y = new double[n];
	for (double i = xn; i <= xk; i += dx)
	{

		double z = calc(i);
		y[p] = z;
		p++;
	}
	return n;
}
int taskB(double *x, int size, double *&y)
{
	y = new double[size];
	for (int i = 0;i < size;i++)
	{
		double z = calc(x[i]);
		y[i] = z;
	}
	return size;
}

