#include <iostream>
<<<<<<< HEAD
#include <cmath>
#include <string>


=======
#include <cmath>	
#include "Calc.h"
>>>>>>> bf6e04aa0a2238ef57aae332c41286f063b36cfd
using namespace std;

double calc(double a, double b, double x)
{
	double numenator = pow(b, 3) + (sin(a * x) * sin(a * x));
	double denominator = (acos(x * b * x)) + exp(-x / 2);
<<<<<<< HEAD
	double y = numenator/denominator;
	return y;
}

int taskA(double a, double b, double xn, double xk, double dx, double *&y)
=======
	double y = numenator / denominator;
	return y;
}

int taskA(double a, double b, double xn, double xk, double dx, double*& y)
>>>>>>> bf6e04aa0a2238ef57aae332c41286f063b36cfd
{
	int p = 0;
	int n = (xk - xn) / dx + 1;
	y = new double[n];
	for (double i = xn; i <= xk; i += dx)
	{
<<<<<<< HEAD
		
=======

>>>>>>> bf6e04aa0a2238ef57aae332c41286f063b36cfd
		double z = calc(a, b, i);
		y[p] = z;
		p++;
	}
	return n;
}
<<<<<<< HEAD
int taskB(double a, double b, double *x, int size, double *&y)
=======
int taskB(double a, double b, double* x, int size, double*& y)
>>>>>>> bf6e04aa0a2238ef57aae332c41286f063b36cfd
{
	y = new double[size];
	for (int i = 0; i < size; i++)
	{
		double z = calc(a, b, x[i]);
		y[i] = z;
	}
	return size;
}
