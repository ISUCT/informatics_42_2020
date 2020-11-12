#include <iostream>
#include <cmath>
#include <string>
#include "Lab1_Functions.h"

using namespace std;

 void SquareWithD(int L) 
 {
	 
		for (int i = 1; i <= L; i++)
		{
			for (int j = 1; j <= L; j++)
			{
				if (i == 1 || i == L || j == 1 || j == L || i == j)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
 }
 void SquareWithOutD(int L)
 {
	
		for (int i = 1; i <= L; i++)
		{
			for (int j = 1; j <= L; j++)
			{
				if (i == 1 || i == L || j == 1 || j == L)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
 }