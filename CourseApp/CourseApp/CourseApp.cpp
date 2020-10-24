#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double a = 4.1;
	const double b = 2.7;
	double xn = 1.2;
	double xk = 5.2;
	double dx = 0.8;


	for (double x = xn; x <= xk; x += dx) {
		double numerator = a * pow(x, 1 / 2.0) - b * log(x);
		double denominator = log10(abs(x - 1));
		double y = numerator / denominator;
		cout << "x=" << x << " y=" << y << endl;
	}

	return 0;
}

