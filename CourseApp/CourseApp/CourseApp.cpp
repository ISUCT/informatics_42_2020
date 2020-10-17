// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double a = 0.8;
	const double b = 0.4;
	for (double x = 1.23; x <= 7.23; x += 1.2) {
		double numenator = pow(pow(x - a, 2), 1 / 3.0) + pow(abs(x + b), 1 / 5.0);
		double denominator = pow(pow(x, 2) - pow(a - b, 2), 1 / 9.0);
		double y = numenator / denominator;
		cout << "x= "<< x <<  " y= " << y << endl;
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
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
