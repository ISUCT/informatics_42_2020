#include <iostream>
#include <cmath>
#include "Calc.h"
using namespace std;
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
	cout << a << endl;
}
double Calc(double c, double a, double b)
{

	double s = pow(a, (c)) - pow(b, (c));
	double d = log(a / b);
	double f = pow(a * b, 1 / 3.0);
	return s / d * f;
}
int **fill(int x, int y) {
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
            cout << m[i][j];
        }   cout << endl;
    }
    int**& mRef = m;
    return mRef;
}
void draw(int** m, int x, int y, string s) {
    cout << "Vasha figura:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (m[i][j] == 1) {
                cout << s << "";
            }
            else {
                cout << " ";
            }
        }cout << endl;
    }
}
