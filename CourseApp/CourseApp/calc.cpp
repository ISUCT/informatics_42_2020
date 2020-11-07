#include <iostream>
#include <cmath>
#include <string>


using namespace std;

double calc(double a, double b, double x)
{
	double numenator = pow(b, 3) + (sin(a * x) * sin(a * x));
	double denominator = (acos(x * b * x)) + exp(-x / 2);
	double y = numenator/denominator;
	return y;
}

int taskA(double a, double b, double xn, double xk, double dx, double *&y)
{
	int p = 0;
	int n = (xk - xn) / dx + 1;
	y = new double[n];
	for (double i = xn; i <= xk; i += dx)
	{
		
		double z = calc(a, b, i);
		y[p] = z;
		p++;
	}
	return n;
}
int taskB(double a, double b, double *x, int size, double *&y1)
{
	y1 = new double[size];
	for (int i = 0; i < size; i++)
	{
		double z = calc(a, b, x[i]);
		y1[i] = z;
	}
	return size;
}