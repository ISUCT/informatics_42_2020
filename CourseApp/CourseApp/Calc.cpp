//option 14

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double calc(double a, double b, double x)
{
	double numenator = abs(a - b * x);
	double denominator = pow((log(x) / log(10)), 3);
	double y = pow((numenator / denominator), 1 / 2.0);
	return y;
}
double calc(double x)
{
	const double a = 7.2;
	const double b = 4.2;
	return calc(a, b, x);
}
void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, b, x);
		cout << x << "\t" << y << endl;
	}
	return;
}
void taskB(double a, double b, double* x, int size)
{
	for (int i = 0;i < size;i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x = %.3f y = %.3f \n", x[i], y);
		cout << result << endl;
	}
}