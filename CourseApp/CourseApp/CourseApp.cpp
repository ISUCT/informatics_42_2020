#include <iostream>
#include "Calc.h"
#include <string>
using namespace std;
int main()
{
	double a = 0.4;
	double b = 0.8;
	int f = 0;
	Task_A(3.2, 6.2, 0.6, a, b);

	double m[5] = { 4.48, 3.56, 2.78, 5.28, 3.21 };
	Task_B(m, sizeof(m) / 8, a, b);
	{
		for (int j = 0; j < f; j++) {
			cout << "*";
		}
		cout << endl;
	}
	int** g;
	int x = 0;
	int    y = 0;
	cin >> x >> y;
	g = fill(x, y);
	string s = "O";
	draw(g, x, y, s); 
	

	return 0;
}