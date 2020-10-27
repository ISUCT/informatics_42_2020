#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calc(double a, double b, double x)
{
	double y = (asin(pow(x, a)) + acos(pow(x, b)));
	return y;
}
void taskA(double a, double b, double xn, double xk, double dx, double TA[2][6])
{
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, b, x);
		TA[0][i] = x;
		TA[1][i] = y;
		i++;
	}
	return;
}
void taskB(double a, double b, double *x, double TB[5])
{
	for (int i = 0; i < 5; i++)
	{
		double y = calc(a, b, x[i]);
		TB[i] = y;
	}
	return;
}