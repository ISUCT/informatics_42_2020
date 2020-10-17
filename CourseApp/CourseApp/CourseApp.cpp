// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <math.h>
using namespace std;
double a = 1.1;
double b = 0.09;

double y(double c) {
	double h1 = log10(pow(c, 2) - 1);
	double h2 = (log(a * pow(c, 2) - b)) / (log(5));
	return h1 / h2;
}

int main()
{
	for (double x = 1.2; x <= 2.2; x += 0.2) {
		cout << y(x) << endl;
	}

	double m[5] = { 1.21, 1.76, 2.53, 3.48, 4.52 };
	for (int i = 0; i < 5; i++) {
		cout << y(m[i]) << endl;
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
