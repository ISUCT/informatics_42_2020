#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Mouse_Quantity(); //method definition for main

class Mouse
{
public:

	Mouse()
	{
		this->MouseAge = MouseAge;
		this->MouseName = MouseName;
		this->MouseBloom = MouseBloom;
		this->MouseBreed = MouseBreed;

		this->Bloom = Bloom;
		this->Age = Age;
		this->Name = Name;

		set_inf();
	}

	string getName()
	{
		return MouseName;
	}

	string getBloom()
	{
		return MouseBloom;
	}

	double getAge()
	{
		return MouseAge;
	}

	string getBreed()
	{
		return MouseBreed;
	}

	void get_inf()
	{
		cout << "Bloom - " << MouseBloom << endl;
		cout << "Age - " << MouseAge << "years" << endl;
		cout << "Name - " << MouseName << endl;
		Mouse_Breed();
		cout << "---------" << endl;
		cout << endl; 
	}

private:

	double MouseAge;
	string MouseName;
	string MouseBloom;
	string MouseBreed;

	string Bloom;
	double Age;
	string Name;

	void set_inf()
	{
		cout << "Enter mouse Bloom " << endl;
		Mouse_Bloom();
		SetBloom();

		cout << "Enter mouse Age" << endl;
		Mouse_Age();
		SetAge();

		cout << "Enter mouse Name" << endl; 
		Mouse_Name();
		SetName();

		system("cls");
	}

	void Mouse_Bloom()
	{
		cout << "Bloom:" << "\t";
		cin >> Bloom;
	}

	void SetBloom()
	{
		MouseBloom = Bloom;
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
			if (MouseBloom == "black" || MouseBloom == "Black" || MouseBloom == "brown" || MouseBloom == "Brown")
			{
				MouseBreed = "House mouse";
				cout << "Breed - " << MouseBreed << endl;
			}
			else if (MouseBloom == "yellow" || MouseBloom == "Yellow" || MouseBloom == "golden" || MouseBloom == "Golden" || MouseBloom == "orange" || MouseBloom == "Orange")
			{
				MouseBreed = "Harvest mouse";
				cout << "Breed - " << MouseBreed << endl;
			}
			else if (MouseBloom == "white" || MouseBloom == "White")
			{
				MouseBreed = "mouse-baby";
				cout << "Breed -  " << MouseBreed << endl;
			}
			else { cout << "Error 404  breed is't found :) " << endl; };
	}
};
