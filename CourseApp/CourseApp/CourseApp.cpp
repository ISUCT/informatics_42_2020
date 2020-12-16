#include <iostream>
#include "Calk.h"

class dog{
public:
	int age;
	int b;
	int data;
	dog(int a, int d, int c) {
		age = a;
		b = d;
		data = c;
	}
	dog(int a) :dog(a, 1970, 2002) {}
	void Born() {
		std::cout << b << std::endl;
	}
	void T_day() {
		std::cout << data << std::endl;
	}
	int Data() {
		return age + b;
	}
};

int main()
{
	dog p1(20, 1920, 1940);
	dog p2(32);
	int** g;
	int x = 0;
	int	y = 0;
	std::cin >> x >> y;
	g = fill(x, y);
	std::string s = "O";
	draw(g, x, y, s);

	double a = 2.0;
	double b = 0.95;

	Task_A(1.25, 2.75, 0.3, a, b);

	double m[5] = { 2.2, 3.78, 4.51, 6.58, 1.2 };
	Task_B(m, sizeof(m)/8, a, b);

	for (int i = 0; i < x; i++) {
		delete[] g[i];
	}
	delete[] g;
	return 0;
}