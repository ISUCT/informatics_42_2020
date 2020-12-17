// CourseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class Square {
private:
    int size = 0;
    char** array;
    int MovingX = 0;
    int MovingY = 0;
 
public:
    Square(int a, char b) {
        size = a;
        array = new char* [size];
 
        for (int i = 0; i < size; i++) {
            array[i] = new char[size];
            for (int j = 0; j < size; j++) {
                if (i == 0 or j == 0) {
                    array[i][j] = n;
                }
                else if (i == size - 1 or j == size - 1) {
                    array[i][j] = n;
                }
                else {
                    array[i][j] = ' ';
                };
            };
        };
    }
    void enterDiagonal(bool flag) {
        if (flag==1)
            for (int i = 0; i < size; i++)
                array[i][i] = array[0][0];
    }
 
    void print() {
        for (int i = 0; i < size + MovingY; i++) {
            for (int j = 0; j < size + MovingX; j++) {
                if (i - MovingY < 0 or j - MovingX < 0)
                    cout << "  ";
                else
                    cout << array[i - MovingY][j - MovingX] << ' ';
            }
            cout << endl;
        };
    };
 
    void Move(int x, int y) {
        MovingX = x;
        MovingY = y;
    }
};
 
int main()
{
    int a;
    cout << "Введите размер площади - " ; 
    cin >> a;
    Square newSquare(a, '@');
 
    bool k;
    cout << "Вывести диагональ? " << endl;
    cin >> k;
    newSquare.EnterDiagonal(k);
 
    int x = 0;
    int y = 0;
    cout << "Введите отступ от начала координат : "; 
    cin >> x >> y;
    newSquare.Moving(x, y);
 
    newSquare.print();
    return 0;
}