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

int** fill(int x, int y) {
    int** m = new int* [x];
    for (int i = 0; i < x; i++) {
        m[i] = new int[y];
    }
    int pr = 0;
    if (x == y) { pr = 1; }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if ((i == x - 1) || (j == y - 1) || (j == 0) || (i == 0)) {
                m[i][j] = 1;
            }
            else {
                m[i][j] = 0;
            }
            if ((pr == 1) && (i - j == 0)) {
                m[i][j] = 1;
            }
            std::cout << m[i][j];
        } std::cout << std::endl;
    }
    int** & mRef = m;
    return mRef;
}


void draw(int** m, int x, int y, std::string s) {
    std::cout << "Your figur:" << std::endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (m[i][j] == 1) {
                std::cout << s << "";
            }
            else {
                std::cout << " ";
            }
        }std::cout << std::endl;
    }
}
