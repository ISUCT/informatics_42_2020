#include <iostream>
#include "Calc.h"
using namespace std;
int main()
{
	double a = 0.4;
	double b = 0.8;
	int f = 0;
	Task_A(3.2, 6.2, 0.6, a, b);

	double m[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 };
	Task_B(m, sizeof(m) / 8, a, b);
	cout << "Vvedite razmer epta) :";
	cin >> f;
	for (int i = 0;i < f;i++)
	{
		for (int j = 0; j < f; j++){
			cout << "*";
		}
		cout << endl;

	}

	return 0;
}