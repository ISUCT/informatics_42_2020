#include <iostream>
#include <cmath>
#include <string>


using namespace std;

double calc(double a, double b, double x)
{
	double y = (asin(pow(x, a)) + acos(pow(x, b)));
	return y;
}
double calc(double x)
{
	const double a = 2.0;
	const double b = 3.0;

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
void taskB(double a, double b, double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x = %.3f y = %.3f \n", x[i], y);
		cout << result << endl;
	}
}