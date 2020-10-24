
#include <iostream>
#include <cmath>
#include <string>
#include "Lab1_Functions.h" 
using namespace std;

	int main(int argc, char *argv[])
	{
		cout << "We have " << argc << " params" << endl << endl;
		for (int i = 0; i < argc; i++)
		{
			cout << argv[i] << endl;
		}
		const double a = -2.5;
		const double b = 3.4;
		taskA(a, b, 3.5, 6.5, 0.6);
		double x[] = { 2.89, 3.54, 5.21, 6.28, 3.48 } ;
		cout << "----------------------------------" << endl;
		taskB(a, b, x, sizeof(x) / sizeof(x[0]));

		char end;
		cin >> end;
		return 0;	
	}
