#include <iostream>
#include "Calk.h"

int main()
{
	std::pair<int**, std::pair<int, int>> g;
	int x, y;
	std::cin >> x >> y;
	g = fill(x, y);
	draw(g.first, g.second.first, g.second.second);

	double a = 2.0;
	double b = 0.95;

	Task_A(1.25, 2.75, 0.3, a, b);


	double m[5] = { 2.2, 3.78, 4.51, 6.58, 1.2 };
	Task_B(m, sizeof(m)/8, a, b);
	for (int i = 0; i < x; i++) {
		delete[] g.first[i];
	}
	delete[] g.first;
	return 0;
}