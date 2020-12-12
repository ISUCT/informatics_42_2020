#include <iostream>
#include <cstring>
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
					if ( i == 1 || i == SizeOfSquare || j == 1 || j == SizeOfSquare) {
						cout << Symbol;
					}
					else if (Compare == 2 && i==j){
						cout << Symbol;
					}
					else {
						cout << " ";
					}
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
	int compare = 1;
	Square SquareOne(10);
	cout << "Do you want to draw a diagonal? " << endl << "1 - No" << endl << "2 - Yes" << endl;
	cin >> compare;
	SquareOne.Draw("#", compare);

	cout << endl;
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
