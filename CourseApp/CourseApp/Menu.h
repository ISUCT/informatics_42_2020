#pragma once
#include <iostream>
#include <string>
using namespace std;
class Menu
{
public:
	Menu()
	{
		get_name();
		get_drink();
	}
	~Menu()
	{

	}
	void get_info()
	{
		set_name();
		set_drink();
	}
private:
	int drink;
	int name;
	void get_name()
	{
		cout << "Menu: " << "\n\nMain dish:" << "\n1 Pasta with cheese" << "\n2 French meat" << "\n3 Pork pie" << endl;
		cout << " \nEnter dish : "; cin >> name;
	}

	void set_name()
	{
		if (name == 1) {
			cout << "Main Dish: Pasta with cheese " << endl;
		}
		else if (name == 2) {
			cout << "Main Dish: French meat" << endl;
		}
		else if (name == 3) {
			cout << "Main Disg: Pork pie" << endl;
		}
	}
	void get_drink()
	{
		cout << "\nDrink:" << "\n1 Water" << "\n2 Juice" << "\n3 Milk" << endl;
		cout << "\nEnter drink : "; cin >> drink;
	}
	void set_drink()
	{

		if (drink == 1) {
			cout << "Drink: Water " << endl;
		}
		else if (drink == 2) {
			cout << "Drink: Juice" << endl;
		}
		else if (drink == 3) {
			cout << "Drink: Milk" << endl;
		}

	}
};