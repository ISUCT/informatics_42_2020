#include <iostream>
#include "Calk.h"

class Dog{
private:
	int age;
	int born;
	int data;
public:
	Dog(int d, int c) {
		age = Age();
		born = d;
		data = c;
	}
	Dog(int a) :Dog(born, 2020) {}

	void set_born(int a) {
		if (a > 0) {
			born = a;
		}
	}
	void set_data(int a) {
		if (a > 0) {
			data = a;
		}
	}
	void set_age(int a) {
		if (a > 0) {
			age = a;
		}
	}
	int Age() {
		return data - born;
	}
};

int main()
{
	Dog p1(1920, 2020);
	Dog p2(2016);
	p1.set_born(1940);
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