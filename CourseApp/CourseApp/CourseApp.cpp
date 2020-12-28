#include <iostream>
#include "Calk.h"

class Rabbit {
private:
    int Age = age();
    int Born;
    int Now;
public:
    Rabbit(int a, int b) {
        Born = a;
        Now = b;
    }
    Rabbit(int a) :Rabbit(a, 2020) {}

    void set_Born(int a) {
        if (a > 0) {
            Born = a;
        }
    }
    void set_Now(int a) {
        if (a > 0) {
            Now = a;
        }
    }
    int age() {
        return Now - Born;
    }
};

int main()
{
	int** g;
	int x = 0;
	int    y = 0;
	std::cin >> x >> y;
	g = fill(x, y);
	std::string s = "#";
	draw(g, x, y, s);

	double a = 1.1;
	double b = 0.09;

	Task_A(1.2, 2.2, 0.2, a, b);


	double m[5] = { 1.21, 1.76, 2.53, 3.48, 4.52 };
	Task_B(m, sizeof(m) / 8, a, b);

	return 0;
}

