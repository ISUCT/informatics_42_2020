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

void taskA(double a, double b, double xn, double xk, double dx)
{
	int n = (xk - xn) / dx;
	double *y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		y[i] = calc(a, b, x);
		cout << y[i] << "\t" << endl;
		i++;
	}
	return;
}
void taskB(double a, double b, double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		cout << x[i] << "\t" << y << endl;
	}
}