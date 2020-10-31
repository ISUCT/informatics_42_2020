#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double calc(double x)
{
	double y = pow(abs(pow(x, 2) - 2.5), 0.25) - pow(log10(pow(x, 2)), 1 / 3);
	return y;
}

void taskA(double xn, double xk, double dx)
{
	int n = (xk - xn)/dx;
	double *y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx) 
	{
		y[i] = calc(x);
		cout << y[i] << "\t" << endl;
		i++;
	}
	return;
}
void taskB(double *x, int size)
{
	for (int i = 0;i < size;i++)
	{
		double y = calc(x[i]);
		cout << x[i] << "\t"<< y << endl;
	}
}

