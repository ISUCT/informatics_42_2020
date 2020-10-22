#include <iostream>
#include <cmath>
using namespace std;

double a = 2.0;
double b = 0.95; 
//double e = exp(1.0);

double y(double c) {
	double d1 = 1 + (log(c / a)*log(c / a));
	double d2 = b - exp(c/a);
	return d1 / d2;
}


int main()
{
	for (double x = 1.25; x <= 2.75; x += 0.3) {
		cout << y(x) << endl;
	}

	double m[5] = { 2.2, 3.78, 4.51, 6.58, 1.2 };
	for (int i = 0; i < 5; i++) {
		cout << y(m[i]) << endl;
	}
	return 0;
}

