#include <iostream>
#include <string>
using namespace std;

double calc(double a, double b, double x)
{
	double numenator = abs(a - b * x);
	double denominator = pow((log(x) / log(10)), 3);
	double y = pow((numenator / denominator), 1 / 2.0);
	return y;
}
int  init(double xn, double xk, double dx, int SizeA)
{
	int numer = SizeA;
	for (double x = xn; x <= xk; x += dx)
	{
		numer++;
	}
	return numer;
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
void resultA(int SizeA, double* ArrayA) 
{
	for (int i = 0; i <= (SizeA - 1); i += 2)
	{
		cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;
	}
	cout << "---------------------" << endl;
}
void resultB(int SizeB, double* ArrayB) 
{
	for (int j = 0; j <= (SizeB - 1); j += 2)
	{
		cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;
	}
}
