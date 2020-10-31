#include <iostream>
#include <cmath>
using namespace std;



double y(double c, double a, double b)
{

	double s = pow(a, (c)) - pow(b, (c));
	double d = log(a / b);
	double f = pow(a * b, 1 / 3.0);
	return s / d * f;
}
int main()
{

	double a = 0.4;
	double b = 0.8;
	for (double x = 3.2; x <= 6.2; x += 0.6) {
		cout << y(x,a,b) << endl;
	}
	return 0;
}