#include <iostream>
#include <string>
#include "calc.h"
using namespace std;
int	 main()
{
	int a ;
	cout << "Enter size of square" << endl;
	cin >> a;
	if (a >= 80) cout << "You are out of the bounce" << endl; 
	if (a < 80 ) cout << "Do you want to draw main diagonal" << endl;
	bool f;
	cin >> f;
	SquareWithD( a, f);
	SquareWithOutD (a, f);
	/*
	if (f == "yes" || f == "Yes" && a < 80)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if ( i == 1 || i == a || j == 1 ||j == a || i == j)
				cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	}
	if (f == "No" || f == "no" && a < 80 )
	{
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
	*/
	return 0;
}