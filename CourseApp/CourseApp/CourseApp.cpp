#include <iostream>
#include "Calk.h"

int main()
{
	double a = 1.1;
	double b = 0.09;

	Task_A(1.2, 2.2, 0.2, a, b);


	double m[5] = { 1.21, 1.76, 2.53, 3.48, 4.52 };
	Task_B(m, sizeof(m) / 8, a, b);

	return 0;
}

