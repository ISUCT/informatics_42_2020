#include <iostream>
using namespace std;
class Square
{
private:
	int size;
	char** array;
	bool d;
	int x = 0;
	int y = 0;
	int height;
	int weight;
	char liny;
	char kvadr;

public:
	Square(int s)
	{
		array = new char* [size];
		size = s;
		if (size > 0)
		{
			for (int i = 0; i < size; i++) {
				array[i] = new char[size];
				for (int j = 0; j < size; j++) {
					array[i][j] = ' ';
				}
			}
		}
		else cout << "Error";
	}
	void drawSquare() {

		cout << "Linia : "; cin >> liny;
		cout << "Kvadrat : "; cin >> kvadr;
	}
	void drawDiagonal(int d) {
		if (d == 1)
			for (int i = 0; i < size + y; i++) {
				for (int j = 0; j < size + x; j++) {
					if (i < y or j < x) {
						cout << liny << liny;
					}
					else {
						if (i == y || i == size + y - 1 || j == x || j == size + x - 1 || j - x == i - y)
							cout << array[i - y][j - x] << kvadr;
						else cout << ' ';
						cout << endl;
					}
				}
				cout << '\n';
			}
		else if (d == 0)
			for (int i = 0; i < size + y; i++) {
				for (int j = 0; j < size + x; j++) {
					if (i < y or j < x) {
						cout << ' ' << ' ';
					}
					else {
						if (i == y || i == size + y - 1 || j == x || j == size + x - 1)
							cout << array[i - y][j - x] << kvadr;
						else cout << ' ';
					}
				}
				cout << '\n';
			}
	}
	void set(int a, int b)
	{
		x = -a;
		y = -b;
	}
};

int main()
{
	cout << "Do you wanna draw a diagonal ?" << "\nAnswer '1'- Draw a diagonal" << "\nAnswer '0'- Don't draw a diagonal" << endl;
	int d = 0;
	cin >> d;
	cout << "And enter size of square" << endl;

	Square newSquare(15);
	newSquare.drawSquare();
	newSquare.set(5, 5);
	newSquare.drawDiagonal(d);
	return 0;
}