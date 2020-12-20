
#include <iostream>
#include <cstring>
#include "calc.h"
using namespace std;

class Square
{
private:
	int Compare = 0;
	int SizeOfSquare = 0;
	string Symbol;
public:
	Square(int SizeOfSquare)
	{
		this->SizeOfSquare = SizeOfSquare;
		this->Symbol = Symbol;
	}

	void Draw(string Symbol, int compare)
	{
		Compare = compare;

		for (int i = 1; i <= SizeOfSquare; i++)
		{
			for (int j = 1; j <= SizeOfSquare; j++)
			{
				if (i == 1 || i == SizeOfSquare || j == 1 || j == SizeOfSquare) {
					cout << Symbol;
				}
				else if (Compare == 2 && i == j) {
					cout << Symbol;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

	}
	~Square(){}
};

int main()
{
	int compare = 1;
	Square SquareOne(10);
	cout << "Do you want to draw a diagonal? " << endl << "1 - No" << endl << "2 - Yes" << endl;
	cin >> compare;
	SquareOne.Draw("#", compare);

	cout << endl;

	const double a = 1.2;
	const double b = 0.48;
	double* y;

	int h = taskA(a, b, 0.7, 2.2, 0.3, y);
	for (int i = 0; i < h; i++)
	{
		cout << y[i] << endl;
	}

	delete[] y;

	double x[] = { 0.25, 0.36,0.56, 0.94, 1.28 };
	cout << "_______________________" << endl;

	h = taskB(a, b, x, sizeof(x) / sizeof(x[0]), y);

	for (int i = 0; i < h; i++)
	{
		cout << x[i] << "\t" << y[i] << endl;
	}
	return 0;

}



class Rabbit 
{
public:
	Rabbit(string name, int age, string colour)
	{
		this->name = name;
		this->age = age;
		this->colour = colour;
	}
	Rabbit(string name, int age): Rabbit(name, age, "white") {
	}

	void setAge(int age)
	{
		if (age > 1 && age < 24)
		{
			this->age = age;
		}
	}
	
	int getAge()
	{
		return this->age = age;
	}

	string getName()
	{
		return this->name = name;
	}

	string getColour()
	{
		return this->colour = colour;
	}

	void display()
	{
		cout << "Rabbit name:" << this->name << " Age:" << this->age << " Colour:" << this->colour << endl;
	}

private:
	string name;
	int age;
	string colour;

};

int main()
{
	Rabbit male("Snowball", 5, "black");
	Rabbit female = Rabbit("Snow", 7);
	male.display();
	male.setAge(12);
	male.display();
	female.display();
	female.setAge(19);
	female.display();
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
