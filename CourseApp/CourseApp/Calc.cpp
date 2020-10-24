#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double calc(double a, double b, double x)
{
	double numenator = log(pow(b, 2) - pow(x, 2)) / log(a);
	double denominator = pow(abs(pow(x, 2) - pow(a, 2)), 1 / 3.0);
	double y = numenator / denominator;
	return y;
}

double calc(double x)
{
	const double a = 2.0;
	const double b = 4.1;
	return calc(a, b, x);
}

void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, b, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void taskB(double a, double b, double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		//printf;
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;
		
	}
}