
// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double a = 7.2;
	const double b = 4.2;
	for (double x = 1.81; x <= 5.31; x += 0.7) {
		double numenator = abs(a - b * x);
		double denominator = pow((log(x)/log(10)), 3);
		double y = pow((numenator / denominator), 1 / 2.0);
		cout << "y=" << y << " x=" << x << endl;
		
	}
	return 0;
}

