#include <iostream>
#include <cmath>
#include "Calc.h"
void Task_A(double xs, double xe, double step, double a, double b) {
	for (double i = xs; i <= xe; i += step) {
		print(Calc(i, a, b));
	}
}

void Task_B(double *m, int i, double a, double b) {
	for (int j = 0; j < i; j++) {
		print(Calc(m[j], a, b));
	}
}

void print(double a) {
	std::cout << a << std::endl;
}
double Calc(double c, double a, double b)
{

	double s = pow(a, (c)) - pow(b, (c));
	double d = log(a / b);
	double f = pow(a * b, 1 / 3.0);
	return s / d * f;
}