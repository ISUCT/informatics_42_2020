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
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(x);
		cout << x << "\t" << y << endl;
	}
	return;
}
void taskB(double *x, int size)
{
	for (int i = 0;i < size;i++)
	{
		double y = calc(x[i]);
		char result[80];
		sprintf_s(result, "x = %.3f y = %.3f \n", x[i], y);
		cout << result << endl;
	}
}

