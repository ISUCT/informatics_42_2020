#include <iostream>
#include "Calc.h"
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "We have " << argc << " params" << endl;
	for (int i = 0; i < argc;i++)
	{
		cout << argv[i] << endl;
	}

	int SizeA = 0;
	int SizeB = 0;
	int* pSizeA = &SizeA;
	double x[] = { 2.4, 2.8, 3.9, 4.7, 3.16 };
	const double a = 7.2;
	const double b = 4.2;
	taskA(1.81, 5.31, 0.7, pSizeA);
	SizeA = SizeA * 2;
	double* ArrayA = new double[SizeA];
	SizeB = ((sizeof(x) / sizeof(x[0])) * 2);
	double* ArrayB = new double[SizeB];
	ScoreTaskA(a, b, 1.81, 5.31, 0.7, ArrayA);
	for (int i = 0; i <= (SizeA - 1); i += 2)
	{
		cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;
	}
	cout << "----------------------" << endl;
	ScoreTaskB(a, b, x, SizeB, ArrayB);
	for (int j = 0; j <= (SizeB - 1); j += 2)
	{
		cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;
	}
	char end;
	cin >> end;
	delete[] ArrayA;
	delete[] ArrayB;
	return 0;


}