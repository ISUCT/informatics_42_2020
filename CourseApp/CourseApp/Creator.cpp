#include <iostream>
#include "Creator.h"
using namespace std;

void Mouse_Quantity()
{
	int quantily = 0;
	vector <Mouse> mouses;

	cout << "Enter quantily of mouses : ";
	cin >> quantily;

	while (quantily < 0)
	{
		cout << "Enter correct quantily ( 0 < quantily <= 5 ) : ";
		cin >> quantily;
	}

	while (quantily >= 5)
	{
		cout << "Enter correct quantily ( 0 < quantily <= 5 ) : ";
		cin >> quantily;
	}

	system("cls");

	for (int i = 0; i < quantily; i++)
	{
		mouses.emplace_back();
	}

	for (int i = 0; i < quantily; i++)
	{
		cout << i + 1 << ") Mouse " << endl;
		mouses[i].get_inf();
	}

}