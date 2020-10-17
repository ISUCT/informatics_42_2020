// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const double a = 4.1;
	const double b = 2.7;
	double xn =1.2;
	double xk = 5.2;
	double dx = 0.8;
	
	for (double x = xn; x <= xk; x += dx) {
		double numenator = a * pow(x, 1 / 2.0) - b * log(x);
		double denominatore = log10(abs(x - 1));
		double y = numenator / denominatore;
		cout << "x=" << x << "\ny=" << y << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

