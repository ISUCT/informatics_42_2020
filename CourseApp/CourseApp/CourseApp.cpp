// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{ 
	const double a = 2.0;
	const double b = 4.1;
	double x = 0.77;
	double dx = 0.2; 

	for (double x = 0.77; x <= 1.77; x += dx) {

		double numenator = log((pow(b, 2) - pow(x, 2))) / log(a);
		double denominator = pow(abs(pow(x, a) - pow(a, 2)), 1 / 3.0);
		double y = numenator / denominator;

		std::cout << "x= " << x << " y=" << y << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil