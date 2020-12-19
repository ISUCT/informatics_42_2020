#include <iostream>
#include "Calc.h"

using namespace std;
int main(int argc, char*argv[])
{
	cout << argc << endl;
	for (int i = 0; i < argc; i++) {
		cout << argc[i] << endl;

	}
	const double a = 2.25;
	void taskA(a, 1.2, 2.7, 0.3);
	double x[] = { 1.31,1.39,1.44,1.56,1.92 };
	cout << "-------------------" << endl;
	void taskB(a, x, sizeof(x) / sizeof(x[0]))
	{
		char end;
		cin >> end;
	}

	return 0;

    
}
