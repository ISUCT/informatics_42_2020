// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double a = 0.1;
double b = 0.5;
double y(double f)
{
	double y1 = a + pow(tan(b*f), 2);
	double y2 = b + pow((1 / tan(a*f)), 2);
	return y1 / y2;
  
}

int maon()
{
	int i;
	double x;
	for (x = 0.15; x <= 1.37; x += 0.25)
	{
		cout << y(x) << endl;
	}
	double arr[5] = { 0.2,0.3,0.44,0.6,0.56 };
	for (i = 0; i < 5; i++) {
		cout << y(arr[i]) << endl;
	}return 0
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
