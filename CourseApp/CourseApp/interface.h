#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include "square.h" 
using namespace std;

class User_interface
{

public:
	Square sqr;
	User_interface()
	{
		actions();
	}
	~User_interface()
	{
		char end;
		cin >> end;
	}
private:
	int variant;
	char obj_1 = '#';
	char obj_2 = '>';


	void enter_size()
	{
		cout << "Enter size : ";  cin >> sqr.size;
		while (sqr.size <= 0)
		{
			system("cls");
			cout << "Enter correct size : "; cin >> sqr.size;
		}
		system("cls");
	}
	void enter_character()
	{
		cout << endl;
		cout << "Line character : "; cin >> obj_2;
		cout << "Object character : "; cin >> obj_1;
		system("cls");
	}

	void print_actions()
	{
		cout << endl;
		cout << "You can : " << endl;
		cout << "  1) use presets" << endl;
		cout << "  2) draw lines" << endl;
		cout << "  3) fill box" << endl;
		cout << "  4) clear all" << endl;
		cout << "  5) change size or character" << endl;
		cout << "  6) delete all and exit" << endl;
		cout << endl;
	}
	void print_presets()
	{
		cout << endl;
		cout << "You can : " << endl;
		cout << "  1) draw box" << endl;
		cout << "  2) draw diogonal" << endl;
		cout << "  3) back" << endl;
		cout << endl;
	}
	void print_changes()
	{
		cout << endl;
		cout << "Now Square size is : " << sqr.size << endl;
		cout << "Now line character is : " << obj_2 << endl;
		cout << "Now object character is : " << obj_1 << endl;
		cout << endl;
		cout << "You can : " << endl;
		cout << "  1) change size" << endl;
		cout << "  2) change character" << endl;
		cout << "  3) back" << endl;
		cout << endl;
	}
	void print_lines()
	{
		cout << endl;
		cout << "You can : " << endl;
		cout << "  1) left line" << endl;
		cout << "  2) right line" << endl;
		cout << "  3) top line" << endl;
		cout << "  4) button line" << endl;
		cout << "  5) back" << endl;
		cout << endl;
	}

	void actions()
	{
		while (variant != 6)
		{
			print_matrix();
			print_actions();
			cout << "Choose action : "; cin >> variant;
			switch (variant)
			{
			case 1:
				presets();
				break;
			case 2:
				lines();
				break;
			case 3:
				sqr.fill();
				break;
			case 4:
				sqr.clear();
				break;
			case 5:
				changes();
				break;
			default:
				break;
			}
		}
		system("cls");
	}
	void presets()
	{
		system("cls");
		print_matrix();
		print_presets();
		cout << "Choose type of presets : "; cin >> variant;
		switch (variant)
		{
		case 1:
			sqr.box();
			break;
		case 2:
			sqr.diagonal();
			break;
		case 3:
			break;
		}
	}
	void changes()
	{
		system("cls");
		print_matrix();
		print_changes();
		cout << "Choose type of changes : "; cin >> variant;
		switch (variant)
		{
		case 1:
			resize_matrix();
			break;
		case 2:
			enter_character();
			break;
		case 3:
			break;
		}
	}
	void lines()
	{
		system("cls");
		print_matrix();
		print_lines();
		cout << "Choose type of line : "; cin >> variant;
		switch (variant)
		{
		case 1:
			sqr.left_line();
			break;
		case 2:
			sqr.right_line();
			break;
		case 3:
			sqr.top_line();
			break;
		case 4:
			sqr.botton_line();
			break;
		case 5:
			break;
		}
	}


	void print_matrix()
	{
		system("cls");
		for (int i = 0; i < sqr.size; i++)
		{
			for (int j = 0; j < sqr.size; j++)
			{
				switch (sqr.matrix[i][j])
				{
				case 1:
					cout << obj_1 << obj_1;
					break;
				case 2:
					cout << obj_2 << obj_2;
					break;
				case 0:
					cout << '.' << '.';
					break;
				}
			}
			cout << endl;
		}
	}
	void resize_matrix()
	{
		cout << endl;
		enter_size();
		sqr.matrix.clear();
		sqr.matrix.resize(sqr.size, vector<int>(sqr.size));
		sqr.clear();
	}
};