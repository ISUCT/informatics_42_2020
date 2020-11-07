
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
	double xn = 3.5;
	double xk = 6.5;
	double dx = 0.6;
	ArrInfo dataTaskA = taskA(a, b, xn, xk, dx);
	for (int i = 0; i < dataTaskA.length; i++)
	{
		cout << " y = " << dataTaskA.function[i] << "\t" << endl;
	}
	double array[] = { 2.89, 3.54, 5.21, 6.28, 3.48 };
	cout << "----------------------------------" << endl;
	ArrInfo dataTaskB = taskB(a, b, array, sizeof(array) / sizeof(array[0]));
	for (int i = 0; i < dataTaskB.length; i++)
	{
		cout << " y = " << dataTaskB.function[i] << "\t" << endl;
	}
	delete[] dataTaskA.function;
	delete[] dataTaskB.function;
	return 0;
}

