#include <iostream>
#include <string>

using namespace std;

class Square
{
public:
    Square(int side)
    {
        if (side > 0 && side <= 100)
        {
            SquareSide = side;
        }
        matrix = new bool*[SquareSide];
        for (int i = 0; i < SquareSide; i++)
        {
            matrix[i] = new bool[SquareSide];
            for (int j = 0; j < SquareSide; j++)
            {
                matrix[i][j] = false;
            }
        }
    }
    ~Square()
    {
        for (int i = 0; i < SquareSide; i++)
        {
            delete[](matrix[i]);
        }
        delete[](matrix);
    }
    void SquareWithDiag()
    {
        for (int i = 0; i < SquareSide; i++)
        {
            for (int j = 0; j < SquareSide; j++)
            {
                if (i == 0 || i == (SquareSide-1) || j == 0 || j == (SquareSide-1) || i == j)
                {
                    matrix[i][j] = true;
                }
            }
        }
    }
    void SquareWithOutDiag()
    {
        for (int i = 0; i < SquareSide; i++)
        {
            for (int j = 0; j < SquareSide; j++)
            {
                if (i == 0 || i == (SquareSide-1) || j == 0 || j == (SquareSide-1))
                {
                    matrix[i][j] = true;
                }
            }
        }
    }
    void ConsoleOutMatrix()
    {
        for (int i = 0; i < SquareSide; i++)
        {
            for (int j = 0; j < SquareSide; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout<<endl;
        }
    }
private:
    int SquareSide = 0;
    bool **matrix;
};

int main()
{
    int side;
    cout << "Pls enter the side of square" << endl;
    cin >> side;
    Square firstSquare(side);
    int diagonal;
    cout << "Do you want to have a diagonal? (0 - No, 1 - Yes)" << endl;
    cin >> diagonal;
    switch (diagonal)
    {
        case 0:
            firstSquare.SquareWithOutDiag();
            firstSquare.ConsoleOutMatrix();
            break;
        case 1:
            firstSquare.SquareWithDiag();
            firstSquare.ConsoleOutMatrix();
            break;
        default:
            cout << "Wrong Choice" << endl;
            break;;
    }
    return 0;
}
