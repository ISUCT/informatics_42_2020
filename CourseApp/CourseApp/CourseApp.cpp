#include <iostream>
using namespace std;

class Square
{
private:
	int SizeOfSquare;
public:

	Square()
	{
		if (SizeOfSquare > 0 && SizeOfSquare <= 50)
		{
			this->SizeOfSquare = SizeOfSquare;
		}
	}

	void Input() // ввод размера квадрата
	{
		cout << "Now you must enter the size of the square." << endl;
		cout << "Input Size of Square:"; cin >> SizeOfSquare; cout << endl;
	}

	void Draw() // вывод квадрата на экран
	{
		for (int i = 1; i <= SizeOfSquare; i++)
		{
			for (int j = 1; j <= SizeOfSquare; j++)
			{
				if (i == j || i == 1 || i == SizeOfSquare || j == 1 || j == SizeOfSquare)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	}

	~Square()
	{
	}
};

int main()
{
	Square SquareOne;
	SquareOne.Input();
	SquareOne.Draw();
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
