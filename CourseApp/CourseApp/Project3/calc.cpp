#include <iostream>
#include <cmath>
#include <string>
using namespace std;


double calc (double a, double b, double x)
	{
		double numerator = pow((a + b * x), 2.5);
		double denominator = 1 + log(a + b * x);
		double y = numerator / denominator;
		return y;
	}
double calc(double x)
{
const double a = 2.5;
const double b = 4.6;
return calc(a, b, x);
}
void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk;x += dx) {
	double y = calc(a, b, x);
	cout << x << "\t" << y << endl;
	}
	return;
}
void taskB(double a, double b, double* x, int size)
{
	for (int i = 0;i< size; i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x=%.3f y=%.3f/n", x[i], y);
		cout << result << endl;
	}
}
// Run program: //Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file#pragma once
