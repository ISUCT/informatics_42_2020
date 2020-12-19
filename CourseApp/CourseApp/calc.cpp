#include <iostream>
#include "Calc.h"
using namespace std;
void taskA(double xn, double xk, double dx, double a)
{
	int n = (xk - xn) / dx;
	double* y = new double[n];
	int i = 0;
	for (double x = xn; x <= xk; x += dx) {
		y[i] = calc(x);
		cout << y[i] << endl;
		i++;
	}
	return;
}
void taskB(double* x, int size, double a)
{
	for (int i = 0; i < size; i++) {
		double y = calc(x[i]);
		cout << x[i] << y << endl;
	}
}
double calc(double x, double a )
{
	double y = pow(a, (x * x - 1)) - log(x * x - 1) + pow((x * x - 1), 1 / 3.0);
	return y;
}