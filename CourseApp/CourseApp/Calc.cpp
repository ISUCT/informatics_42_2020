#include <iostream>
#include <string>
using namespace std;
void Diagonal(int a, bool f)
{
	if (f == 1)
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if (i == 1 || i == a || j == 1 || j == a || i == j)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
}
void Nodiagonal(int a, bool f)
{
	if (f == 0)
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if (i == 1 || i == a || j == 1 || j == a)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
}