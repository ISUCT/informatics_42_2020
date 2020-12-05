#include <iostream>
using namespace std;
class Square {
private:
    int size = 0;
    char** array;
    int offsetX = 0;
    int offsetY = 0;

public:
    Square(int s) {
        size = s;
        array = new char* [size];
    }
    void init(char n)
    {
        for (int i = 0; i < size; i++) {
            array[i] = new char[size];
            for (int j = 0; j < size; j++) {
                if (i == 0 or j == 0)
                {
                    array[i][j] = n;
                }
                else if (i == size - 1 || j == size - 1)
                {
                    array[i][j] = n;
                }
                else
                {
                    array[i][j] = ' ';
                };
            };
        };
    };
    void setDiagonal(bool x) {
        if (x) 
        {
            for (int i = 0; i < size; i++)
                array[i][i] = array[0][0];
        }
    }

    void print() {
        for (int i = 0; i < size + offsetY; i++) {
            for (int j = 0; j < size + offsetX; j++) {
                if (i - offsetY < 0 or j - offsetX < 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << array[i - offsetY][j - offsetX] << ' ';
                }
            }
            cout << '\n';
        };
    };

    void setOffset(int x, int y) {
        offsetX = x;
        offsetY = y;
    }
};

int main()
{
    Square newSquare(10);

    bool f;
    cout << "Do you want to display the diagonal? " << endl;
    cin >> f;
    newSquare.init('#');
    newSquare.setDiagonal(f);
    newSquare.setOffset(5, 10);
    newSquare.print();
    return 0;
}


