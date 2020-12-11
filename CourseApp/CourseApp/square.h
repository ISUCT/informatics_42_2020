#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

class Square
{
public:
	int size = 10;
	vector<vector<int>> matrix;

	Square()
	{
		matrix.resize(size, vector<int>(size));
		clear();
	}
	~Square()
	{
		matrix.clear();
	}
	void clear()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				matrix[i][j] = 0;
			}
		}
		cout << endl;
	}
	void fill()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				matrix[i][j] = 1;
			}
		}
		cout << endl;
	}

	void box()
	{
		left_line();
		right_line();
		top_line();
		botton_line();
		cout << endl;
	}
	void diagonal()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if ((matrix[i][j] != 1) && (i==j))
				{
					matrix[i][j] = 2;
				}
			}
		}
		cout << endl;
	}

	void left_line()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j == 0)
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
	void right_line()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j == (size - 1))
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
	void top_line()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == 0)
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
	void botton_line()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i == (size - 1))
				{
					matrix[i][j] = 1;
				}
			}
		}
	}
};




