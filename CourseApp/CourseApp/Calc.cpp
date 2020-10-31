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

void taskA(double xn, double xk, double dx, int* pSizeA)
{
	int numer = *pSizeA;
	for (double x = xn; x <= xk; x += dx)
	{
		numer++;
	}
	*pSizeA = numer;
}
void ScoreTaskA(double a, double b, double xn, double xk, double dx, double* ArrayA)
{
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, b, x);
		ArrayA[i] = x;
		i++;
		ArrayA[i] = y;
		i++;
	}
	return;
}
void ScoreTaskB(double a, double b, double* x, int SizeB, double* ArrayB)
{
	int i = 0;
	for (int n = 0; n <= ((SizeB / 2) - 1); n++)
	{
		double y = calc(a, b, x[n]);
		ArrayB[i] = x[n];
		i++;
		ArrayB[i] = y;
		i++;
	}
	return;
}