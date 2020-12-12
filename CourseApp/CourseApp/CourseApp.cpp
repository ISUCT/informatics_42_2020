#include <iostream>
#include "Calk.h"

int main()
{
	int** g;
	int x = 0;
	int	y = 0;
	std::cin >> x >> y;
	g = fill(x, y);
	std::string s = "#";
	draw(g, x, y, s);

	double a = 2.0;
	double b = 0.95;

	//Task_A(1.25, 2.75, 0.3, a, b);


	double m[5] = { 2.2, 3.78, 4.51, 6.58, 1.2 };
	//Task_B(m, sizeof(m)/8, a, b);
	for (int i = 0; i < x; i++) {
		delete[] g[i];
	}
	delete[] g;
	return 0;
}