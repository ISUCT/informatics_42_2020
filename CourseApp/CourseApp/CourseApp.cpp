
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
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
		ArrInfo data = taskA(a, b, 3.5, 6.5, 0.6);
		int length = data.length;
		double *y = data.function;
		for (int i = 0; i < length; i++)
		{
		 cout << y[i] << "\t" << endl;
		}
		double array[] = { 2.89, 3.54, 5.21, 6.28, 3.48 };
		cout << "----------------------------------" << endl;
		taskB(a, b, array, sizeof(array) / sizeof(array[0]));
		return 0;	
	}
	
