#include <iostream>
#include <cmath>
using namespace std;


class Square {
public:
	Square(int side, int left_indent, int top_indent, bool diagonal) {
		this->side = side;
		this->left_indent = left_indent;
		this->top_indent = top_indent;
		this->diagonal = diagonal;
		this->matrix = new int* [side];
	}

	void create_buffer() {

		for (int i = 0; i < side; i++)
			matrix[i] = new int[side];
	}
	void clear_buffer() {
		for (int i = 0; i < side; i++)
			for (int j = 0; j < side; j++)
				matrix[i][j] = 0;
	}
	void draw_square() {
		for (int i = 0; i < side; i++)
			for (int j = 0; j < side; j++) {
				if ((i == 0) || (j == 0) || (i == (side-1)) || (j == (side-1)))
					matrix[i][j] = 1;
				else {
					if ((i == j) && (diagonal))
						matrix[i][j] = 1;
				}
			}
	}
	void display() {
		for (int i = 0; i < side + top_indent; i++) {
			for (int j = 0; j < side + left_indent; j++) {
				if ((i < top_indent) || (j < left_indent))
					cout << " ";
				else {
					if (matrix[i - top_indent][j - left_indent] == 1)
						cout << "#";
					else cout << " ";
				}
			}
			cout << endl;
		}
	}
	~Square() {
		for (int i = 0; i < side; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		cout << "Вызван деструктор.";
	}

private:
	int** matrix;
	int side;
	int left_indent;
	int top_indent;
	bool diagonal;
};

int main() {

	setlocale(LC_ALL, "Russian");

	int side;
	int left_indent, top_indent;
	bool diagonal;
	cout << "Введите размер квадрата: ";
	cin >> side;
	cout << "\n" << "Введите отступ слева: ";
	cin >> left_indent;
	cout << "\n" << "Введите отступ сверху: ";
	cin >> top_indent;
	cout << "\n" << "Наличие диагонали (Есть - 1, Нет - 0): ";
	cin >> diagonal;

	Square square_1(side, left_indent, top_indent, diagonal);
	square_1.create_buffer();
	square_1.clear_buffer();
	square_1.draw_square();
	square_1.display();

	return 0;
}