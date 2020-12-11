// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Calc.h"

void print(int(*numbers)[2], const int rows, int columns) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << numbers[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

void increment(int *x)
{
	(*x)++;
	std::cout << "increment function: " << *x << std::endl;
}

int main(int argc, char *argv[])
{
	int nums[3][2] = { {1, 22}, {13, 54}, {75,46} };
	print(nums, 3, 2);
	return 0;
}

