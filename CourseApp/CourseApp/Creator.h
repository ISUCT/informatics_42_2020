#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cctype> 
#include <ctype.h>
using namespace std;

void Mouse_Quantity(); //method definition for main

class Mouse
{
public:

	Mouse()
	{
		this->MouseAge = MouseAge;
		this->MouseName = MouseName;
		this->MouseColor = MouseColor;
		this->MouseBreed = MouseBreed;

		this->Color = Color;
		this->Age = Age;
		this->Name = Name;

		set_info();
	}

	string getName()
	{
		return MouseName;
	}

	string getColor()
	{
		return MouseColor;
	}

	double getAge()
	{
		return MouseAge;
	}

	string getBreed()
	{
		return MouseBreed;
	}

	void get_info()
	{
		cout << "Color - " << MouseColor << endl;
		cout << "Age - " << MouseAge << "years" << endl;
		cout << "Name - " << MouseName << endl;
		Mouse_Breed();
		cout << "---------" << endl;
		cout << endl; 
	}

private:

	double MouseAge;
	string MouseName;
	string MouseColor;
	string MouseBreed;

	string Color;
	double Age;
	string Name;

	void set_info()
	{
		cout << "Enter mouse Bloom " << endl;
		Mouse_Color();
		SetColor();

		cout << "Enter mouse Age" << endl;
		Mouse_Age();
		SetAge();

		cout << "Enter mouse Name" << endl; 
		Mouse_Name();
		SetName();

		system("cls");
	}

	void Mouse_Color()
	{
		cout << "Color:" << "\t";
		cin >> Color;
	}

	void SetColor()
	{
		for (auto& MouseColor : Color)
		{
			MouseColor = tolower(MouseColor);

		}
		MouseColor = Color;
	}

	void Mouse_Age()
	{
		cout << "Age: " << "\t";
		cin >> Age;

		while (Age <= 0)
		{
			cout << "Enter correct Age ( 0 > Age >= 4 ): ";
			cin >> Age;

		}

		while (Age >= 4.1)
		{
			cout << "Enter correct Age ( 0 > Age >= 4 ) : ";
			cin >> Age;
		}
	}

	void SetAge()
	{	
		MouseAge = Age;
	}

	void Mouse_Name()
	{
		cout << "Name: "<< "\t"; 
		cin >> Name;
	}

	void SetName()
	{
		MouseName = Name;
	}
	
	void Mouse_Breed()
	{
		if ( MouseColor == "black" || MouseColor == "brown")
		{
			MouseColor = "House mouse";
			cout << "Breed - " << MouseColor << endl;
		}
		else if (MouseColor == "yellow" || MouseColor == "golden" || MouseColor == "orange")
		{
			MouseColor = "Harvest mouse";
			cout << "Breed - " << MouseColor << endl;
		}
		else if (MouseColor == "white" || MouseColor == "grey")
		{
			MouseColor = "mouse-baby";
			cout << "Breed -  " << MouseColor << endl;
		}
		else {
			try
			{
				throw 404;
			}
			catch (int i)
			{
				cout << "Error " << i << " - breed is't found :)" << endl;
			}
		};
	}
};
