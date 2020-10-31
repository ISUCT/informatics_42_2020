#include <iostream>
#include <cmath>
#include "Calk.h"

void Task_A(double xs, double xe, double step, double a, double b) {
	for (double i = xs; i <= xe; i += step) {
		print(Calk(i, a, b));
	}
}

void Task_B(double *m, int i, double a, double b) {
	for (int j = 0; j < i; j++) {
		print(Calk(m[j], a, b));
	}
}

void print(double a) {
	std::cout << a << std::endl;
}

double Calk(double c, double a, double b) {
	double d1 = 1 + (log(c / a) * log(c / a));
	double d2 = b - exp(c / a);
	return d1 / d2;
}