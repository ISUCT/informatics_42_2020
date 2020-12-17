// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class Square
{
private:
    int size = 0;
    char** array;
    int movingX = 0;
    int movingY = 0;
public:
    Square(int a, char b)
    {
        size = a;
        array = new char* [size];

        for (int i = 0; i < size; i++) {
            array[i] = new char[size];
            for (int j = 0; j < size; j++) {
                array[i][j] = b;
            };
        };
    }
    void printWithmoving() {
        for (int i = 0; i < size + movingY; i++) {
            for (int j = 0; j < size + movingX; j++) {
                if (i < movingY or j < movingX) {
                    cout << ' ' << ' ';
                }
                else {
                    if (j - movingX == i - movingY)
                        cout << array[i - movingY][j - movingX] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\b';
        };
    };
    void printWithmovingDiag() {
        for (int i = 0; i < size + movingY; i++) {
            for (int j = 0; j < size + movingX; j++) {
                if (i < movingY or j < movingX) {
                    cout << ' ' << ' ';
                }
                else {
                    if (i == movingY || i == size + movingY - 1 || j == movingX || j == size + movingX - 1)
                        cout << array[i - movingY][j - movingX] << ' ';
                    else cout << "  ";
                }
            };
            cout << '\b';
        };
    };
    void move(int x, int y) {
        movingX = --x;
        movingY = --y;
    }

};

int main()
{
    bool c;
    cout << " Вывести диагональ? " << endl;
    cin >> c;
    Square newSquare(7, '$');
    newSquare.move(5, 3);
    newSquare.printWithmovingDiag();
    if (c == 1) newSquare.printWithmoving();
    return 0;
}