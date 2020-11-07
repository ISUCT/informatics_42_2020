
#include <iostream>
#include "Calc.h"
using namespace std;


int main(int argc, char* argv[])
{
	cout << "We have " << argc << " params" << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	const double a = 1.35;
	const double b = 0.98;
	double* y = new double[n];
	taskA(a, b, 1.14, 4.24, 0.62, *y);
	double x[] = { 0.35, 1.28, 3.51, 5.21, 4.16 };
	cout << "-----------------------" << endl;
	taskB(a, b, x, sizeof(x) / sizeof(x[0]));
	char end;
	cin >> end;
	return 0;
} 
