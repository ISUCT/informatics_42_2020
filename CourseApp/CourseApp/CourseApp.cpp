//
//#include <iostream>
//#include "Calc.h"
//using namespace std;
//
//
//int main()
//{
//	const double a = 1.35;
//	const double b = 0.98;
//	double* y;
//	int h =taskA(a, b, 1.14, 4.24, 0.62, y);
//	for (int i = 0; i < h; i++)
//	{
//		cout << y[i] << endl;
//
//	}
//	delete[] y;
//	double* y1;
//	double arr[] = { 0.35, 1.28, 3.51, 5.21, 4.16 };
//	cout << "-----------------------" << endl;
//	h = taskB(a, b, arr, sizeof(arr) / sizeof(arr[0]), y1);
//	for (int i = 0; i < h; i++)
//	{
//		cout << arr[i] << "\t" << y1[i] << endl;
//	}
//	delete[] y1;
//	return 0;
//} 

// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// #include<iostream>
// using namespace std;
// int main()
// {
//	int n;
// setlocale(LC_ALL, "rus");
//	cout << " Программа рисует квадрат с диагональю звездочками со стороной\n";
//		cout << " Введите сторону квадрата\n";
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == 1 || i == n || j == 1 || j == n || i == j)
//				cout << "@@";
//			else cout << "  ";
//
//		}
//		 cout << endl;
//	}
//	return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;	

class Square
{
private:
	int Compare = 0;
	int SizeOfSquare = 0;
	string Symbol;
public:

	Square(int SizeOfSquare)
	{
		this->SizeOfSquare = SizeOfSquare;
		this->Symbol = Symbol;
	}

	void Draw(string Symbol, int compare)
	{
		Compare = compare;

		for (int i = 1; i <= SizeOfSquare; i++)
		{
			for (int j = 1; j <= SizeOfSquare; j++)
			{
				if (i == 1 || i == SizeOfSquare || j == 1 || j == SizeOfSquare) {
					cout << Symbol;
				}
				else if (Compare == 2 && i == j) {
					cout << Symbol;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	~Square()
	{
	}
};

int main()
{
	int compare = 1;
			Square SquareOne(10);
			cout << "Do you want to draw a diagonal? " << endl << "1 - No" << endl << "2 - Yes" << endl;
			cin >> compare;
		SquareOne.Draw("#", compare);

		
			cout << endl;
			return 0;
			}