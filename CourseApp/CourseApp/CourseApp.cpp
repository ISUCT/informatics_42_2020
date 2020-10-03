// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	const double a = -2.5;
	const double b = 3.4;
	double x = 3.5;
	double y = 0;
	const double endx = 6.5;
	double numenator = 0;
	double denumenator = 0;

	double dx = 0.6;
	for (x;x < endx;x += dx)
	{
		if (x < 5) 
		{
			numenator = pow((log(pow(a,2) + x) / log(10)), 2);
			denumenator = pow((a + x), 2);
			y = numenator / denumenator;
			cout << "x=" << x << " y=" << y << endl;
		}
		else
		 {
			 numenator = pow((a + b * x), 2.5);
			 denumenator = 1.8 + pow(cos(a * x), 3);
			 y = numenator / denumenator;
			 cout << "x=" << x << " y=" << y << endl;
		 }
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
