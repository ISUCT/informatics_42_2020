#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

double calc(double x)
{

	double y = ((pow(sin(x), 3) + pow(cos(x), 3))*log(x));
	return y;

}
void taskA (double xn, double xk, double dx)
{

	for (double i = xn; i <= xk; i += dx)
	{

		double y = calc(i);
		cout << i << "\t" << y << endl;

	}
	return;
}
void taskB(double *x, int size)
{
	for (int i = 0;i < size;i++)
	{
		double y = calc(x[i]);
		cout << x[i] << "\t" << y << endl;

	}
}