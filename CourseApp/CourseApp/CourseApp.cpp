#include <iostream>
#include "Header.h"
using namespace std; 
class Square
{
private:
    int size;
    char** array;
    int x = 0, y = 0;
public:
    Square(int s)
    {
        size = s;
        array = new char* [size];
    }
    void init(char n)
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = new char[size];
            for (int j = 0; j < size; j++) 
            {
                if ((i == 0) or (j == 0))
                {
                    array[i][j] = n;
                }
                else if ((i == size - 1) || (j == size - 1))
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
    void drawDiagonal(bool x) {
        if (x == 1)
        {
            for (int i = 0; i < size + y; i++)
                array[i][i] = array[0][0];
        }
    } 

    void printDiagonal() 
    {
            for (int i = 0; i < size + y; i++) 
            {
                for (int j = 0; j < size + x; j++) 
                {
                    if ((i - y < 0) or (j - x < 0))  
                    {
                        cout << " ";
                    }
                    else 
                    {
                        cout << array[i - y][j - x] << ' ';    
                    }
                }
                cout << '\n';
            };
    };


    void set(int a, int b) 
    {
        x = a - 1;
        y = b - 1;
    }
};

int main()
{
    Square newSquare(10);
    bool d;
    cout << "Do you want to draw diagonal?" << endl;
    cin >> d;
    newSquare.init('$');
    newSquare.drawDiagonal(d);
    newSquare.set(5, 10);
    newSquare.printDiagonal();
    

    int SizeA = 0;
    int SizeB = 0;

    double x[] = { 2.4, 2.8, 3.9, 4.7, 3.16 };

    const double a = 7.2;
    const double b = 4.2;

    SizeA = init(1.81, 5.31, 0.7, SizeA) * 2;
    double* ArrayA = new double[SizeA];

    SizeB = ((sizeof(x) / sizeof(x[0])) * 2);
    double* ArrayB = new double[SizeB];

    ScoreTaskA(a, b, 1.81, 5.31, 0.7, ArrayA);
    resultA(SizeA, ArrayA);

    ScoreTaskB(a, b, x, SizeB, ArrayB);
    resultB(SizeB, ArrayB);

    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}

