// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const double b = 2.5;
	double x = 1.28;

	double dx = 0.4;
	for (x;x <= 3.28;x += dx)
	{
		double numenator = 1 + pow(sin(pow(b,3) + pow(x,3)),2);
		double denumenator = pow((pow(b, 3) + pow(x, 3)), 1 / 3.0);
		double y = numenator / denumenator;
		cout << "x=" << x << " y=" << y << endl;
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
