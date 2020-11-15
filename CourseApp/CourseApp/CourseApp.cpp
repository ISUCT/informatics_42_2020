#include <iostream>
#include "calc.h"
using namespace std;

class Square
{
private:
    int size;
    char** array;
    bool f;
    int offsetX = 0, offsetY = 0;
public:
    Square(int s)
    {
        size = s;
        cout << "Do you want to display the diagonal? " << endl;
        cin >> f;
        array = new char* [size];
        for (int i = 0; i < size; i++) {
            array[i] =new char[size];
            for (int j = 0; j < size; j++) {
                array[i][j] = '*';
            };
        };
    }
    void printWithOffset() {
        if (f==1)
        for (int i = 0; i < size + offsetY; i++) {
            for (int j = 0; j < size + offsetX; j++) {
                if (i < offsetY or j < offsetX) {
                    cout << ' ' << ' ';
                }
                else {
                    if (i == offsetY || i == size + offsetY - 1 || j == offsetX || j == size + offsetX - 1 || j-offsetX==i-offsetY)
                        cout << array[i - offsetY][j - offsetX] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\n';
        };
    };
    void printWithOffsetDiag() {
        if (f == 0)
            for (int i = 0; i < size + offsetY; i++) {
                for (int j = 0; j < size + offsetX; j++) {
                    if (i < offsetY or j < offsetX) {
                        cout << ' ' << ' ';
                    }
                    else {
                        if (i == offsetY || i == size + offsetY - 1 || j == offsetX || j == size + offsetX - 1)
                            cout << array[i - offsetY][j - offsetX] << ' ';
                        else cout << "  ";
                    }
                };
                cout << '\n';
            };
    };

    void setOffset(int x, int y) {
        offsetX = --x;
        offsetY = --y;
    }
};

int main()
{
    Square newSquare(10);
    newSquare.setOffset(15,7);
    newSquare.printWithOffset();
    newSquare.printWithOffsetDiag();
    return 0;
}

