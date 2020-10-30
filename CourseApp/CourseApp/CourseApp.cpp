#include <iostream>
#include "Calc.h"
using namespace std;

int main(int argc, char* argv[])
{
	cout << "We have " << argc << " params" << endl;
	for (int i = 0; i < argc;i++)
	{
		cout << argv[i] << endl;
	}

	const double a = 7.2;
	const double b = 4.2;
	taskA(a, b, 1.81, 5.31, 0.7);
	double x[] = { 2.4, 2.8, 3.9, 4.7, 3.16 };
	cout << "-------------------" << endl;
	taskB(a, b, x, sizeof(x) / sizeof(x[0]));
	char end;
	cin >> end;
	return 0;
}
