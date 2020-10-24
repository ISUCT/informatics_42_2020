// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calc.h"
using namespace std;

int main(int argc, char* argv[])
{
	cout << "We have" << argc << " params" << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	const double a = 1.2;
	const double b = 0.48;

	taskA(a, b, 0.7, 2.2, 0.3);
	double x[] = {0.25, 0.36,0.56, 0.94, 1.28};
	cout << "_______________________" << endl;

	taskB(a, b, x, sizeof(x) / sizeof(x[0]));
	char end;
	cin >> end;
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
