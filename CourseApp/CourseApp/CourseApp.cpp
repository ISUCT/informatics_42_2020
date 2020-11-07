#include <iostream>
#include "Calc.h"

int main()
{
	double a = 0.4;
	double b = 0.8;

	Task_A(3.2, 6.2, 0.6, a, b);

	double m[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 };
	Task_B(m, sizeof(m) / 8, a, b);
	return 0;
}
