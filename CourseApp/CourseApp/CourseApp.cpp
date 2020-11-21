#include <iostream>
#include "Calk.h"

int main()
{
	int x, y;
	std::cin >> x >> y;
	fill(x, y);
	double a = 2.0;
	double b = 0.95;

	Task_A(1.25, 2.75, 0.3, a, b);


	double m[5] = { 2.2, 3.78, 4.51, 6.58, 1.2 };
	Task_B(m, sizeof(m)/8, a, b);

	return 0;
}