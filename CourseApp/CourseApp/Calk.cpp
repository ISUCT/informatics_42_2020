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
	double h1 = log10(pow(c, 2) - 1);
	double h2 = (log(a * pow(c, 2) - b)) / (log(5));
	return h1 / h2;
}