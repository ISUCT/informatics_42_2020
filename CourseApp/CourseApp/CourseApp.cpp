// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include  <iostream>
#include  "calc.h"
using namespace std;
int main()
{
	double* y;
	int h = taskA(1.25, 3.25, 0.4, y);
	for (int i = 0; i < h; i++)
	{
		cout << y[i] << endl;
	}
	delete[] y;
	double arr[] = { 1.84, 2.71, 3.81, 4.56, 5.62 };
	cout << "------------------------" << endl;
	h = taskB(arr, sizeof(arr) / sizeof(arr[0]), y);
	for (int i = 0; i < h; i++)
	{
		cout << arr[i] << "\t" << y[i] << endl;
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
