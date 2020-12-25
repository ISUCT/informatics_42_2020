#include <iostream>
using namespace std;

class square
{
    int side = 0;
    int **matrix;

public:
    square(int n)
    {
        if (n>0 && n<100)
        {
            side = n;
        }
        matrix = new int*[side];
        for (int i = 0; i < side; i++)
        {
            matrix[i] = new int[side];
            for (int j = 0; j < side; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    ~square()
    {
        for (int i = 0; i < side; i++)
        {
            delete[](matrix[i]);
        }
        delete[](matrix);
    }
    void draw_square()
    {
        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side; j++)
            {
                if (i == 0 || i == (side-1) || j == 0 || j == (side-1))
                {
                    matrix[i][j] = side;
                }
            }
        }
    }
    void draw_diag()
    {
        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side; j++)
            {
                if (i == j)
                {
                    matrix[i][j] = side;
                }
            }
        }
    }
    void print()
    {
        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side; j++)
            {
                if (side>9 && matrix[i][j]==0)
                {
                    cout << matrix[i][j];
                    cout << matrix[i][j]<<" ";
                }
                else
                {
                    cout << matrix[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    int storona;
    int diag;
    cout<<"Side of square (0-100):"<<endl;
    cin>>storona;
    cout<<"With diagonal? (0 - no, 1 - yes):"<<endl;
    cin>>diag;
    square kvadratek(storona);
    kvadratek.draw_square();
    switch(diag)
    {
    case 0:
    {
        kvadratek.print();
        break;
    }
    case 1:
    {
        kvadratek.draw_diag();
        kvadratek.print();
        break;
    }
    default:
    {
        cout<<"FATAL ERROR"<<endl;
        break;
    }
    }

}
