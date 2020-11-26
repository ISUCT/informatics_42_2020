
#include <iostream>
#include "Calc.h"
using namespace std;


int main()
{
	const double a = 1.35;
	const double b = 0.98;
	double* y;
	int h =taskA(a, b, 1.14, 4.24, 0.62, y);
	for (int i = 0; i < h; i++)
	{
		cout << y[i] << endl;

	}
	delete[] y;
	double* y1;
	double arr[] = { 0.35, 1.28, 3.51, 5.21, 4.16 };
	cout << "-----------------------" << endl;
	h = taskB(a, b, arr, sizeof(arr) / sizeof(arr[0]), y1);
	for (int i = 0; i < h; i++)
	{
		cout << arr[i] << "\t" << y1[i] << endl;
	}
	delete[] y1;
	return 0;
} 
