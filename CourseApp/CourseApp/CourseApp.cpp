// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a = 1.2;
	float b = 0.48;
	float xn = 0.7;
	float xk = 2.2;
	float y;

	for (xn; xn<=xk; xn+=0.3)
	{
		y =(pow(b, 3) + (sin(a * xn) * sin(a * xn))) / ((acos(xn * b * xn)) + exp(-xn / 2));
		cout << "x= " << xn << " y= " << y << endl;

	}
	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
