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
double calc(double x)
{
	const double a = 1.2;
	const double b = 0.48;

	return calc(a, b, x);
}
void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, b, x);
		std::cout << "x = " << x << " y = " << y << std::endl;
	}
	return;
}
void taskB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x = %.3f y = %.3f \n", x[i], y);
		cout << result << endl;
	}
}