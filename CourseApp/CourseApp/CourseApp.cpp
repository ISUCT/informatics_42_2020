#include <iostream>
#include <cmath>
#include "Calc.h"
#include <cstdlib>
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
    

    int SizeA = 0;
    int SizeB = 0;
    int* pSizeA = &SizeA;
    double x[] = { 1.88 ,2.26 ,3.84 ,4.55 ,-6.21 };
    const double a = 0.8;
    const double b = 0.4;
    taskA(1.23, 7.23, 1.2, pSizeA);
    SizeA = SizeA * 2;
    double* ArrayA = new double[SizeA];
    SizeB = ((sizeof(x) / sizeof(x[0])) * 2);
    double* ArrayB = new double[SizeB];
    ScoreTaskA(a, b, 1.23, 7.23, 1.2, ArrayA);
    for (int i = 0; i <= (SizeA - 1); i += 2)
    {
        cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;
    }
    cout << "--------------" << endl;
    ScoreTaskB(a, b, x, SizeB, ArrayB);
    for (int j = 0; j <= (SizeB - 1); j += 2)
    {
        cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;
    }
    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}


