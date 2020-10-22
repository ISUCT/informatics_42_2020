#include <iostream>
#include "calc.h"
using namespace std;
int main(int argc, char* argv[])
{
	cout << "we have" << argc << "params" << endl;
	for (int i = 0; i < argc;i++)
	{
		cout << argv[i] << endl;
	}

	const double a = 2.5;
	const double b = 4.6;
	taskA(a, b, 1.1, 3.6, 0.5);
	double x[] = { 1.2,1.28,1.36,1.46,2.35 };
	cout << "---------------------" << endl;
	taskB(a, b, x, sizeof(x) / sizeof(x[0]));
	char end;
	cin >> end;
	return 0;
}

