#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calc(double a, double b, double x)
{
	double y = (asin(pow(x, a)) + acos(pow(x, b)));
	return y;
}
void taskA(double a, double b, double xn, double xk, double dx, double Array[2][2][6])
{
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, b, x);
		Array[0][0][i] = x;
		Array[0][1][i] = y;
		i++;
	}
	return;
}
void taskB(double a, double b, double *x, double Array[2][2][6])
{
	for (int i = 0; i < 5; i++)
	{
		double y = calc(a, b, x[i]);
		Array[1][0][i] = x[i];
		Array[1][1][i] = y;
	}
	return;
}