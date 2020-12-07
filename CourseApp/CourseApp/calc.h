#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
class Interface
{
public: 
    Interface(vector<vector<int>> matrix)
    {
        set_lenght(matrix);
        set_obj_line();
        clear(matrix);
        actions(matrix);
    }
private:
    int lenght;
    char obj;
    char line;
    int variant;
    void set_lenght(vector<vector<int>> matrix)
    {
        cout << "Enter lenght : ";  cin >> lenght;
        while (lenght <= 0)
        {
            system("cls");
            cout << "Enter correct lenght : "; cin >> lenght;
        }
        system("cls");
        matrix.resize(lenght, vector<int>(lenght));
    }
    void set_obj_line()
    {
        cout << "Line character : "; cin >> line;
        cout << "Object character : "; cin >> obj;
        system("cls");
    }
    void actions(vector<vector<int>> matrix)
    {
        while (variant != 5)
        {
            print(matrix);
            cout << "Choose action : "; cin >> variant;
            switch (variant) 
            {
            case 1:
                draw(matrix);
                break;
            case 2:
                diagonal(matrix);
                break;
            case 3:
                fill(matrix);
                break;
            case 4:
                clear(matrix);
                break;
            }
        }
        system("cls");
    }
    void print(vector<vector<int>> matrix)
    {
        system("cls");
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                switch (matrix[i][j])
                {
                case 0:
                    cout << obj << obj;
                    break;
                case 1:
                    cout << line << line;
                    break;
                case 2:
                    cout << '.' << '.';
                    break;
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << "You can : " << endl;
        cout << "  1) draw box" << endl;
        cout << "  2) draw diagonal" << endl;
        cout << "  3) fill box" << endl;
        cout << "  4) clear all" << endl;
        cout << "  5) delete all and exit" << endl;
    }
    void draw(vector<vector<int>> matrix)
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if ((i == 0) || (i == (lenght - 1)) || (j == 0) || (j == (lenght - 1)))
                {
                    matrix[i][j] = 0;
                }
            }
        }
        cout << endl;
    }
    void fill(vector<vector<int>> matrix)
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                matrix[i][j] = 0;
            }
        }
        cout << endl;
    }
    void diagonal(vector<vector<int>> matrix)
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if ((i == j) && (matrix[i][j] != 0))
                {
                    matrix[i][j] = 1;
                }
            }
        }
        cout << endl;
    }
    void clear(vector<vector<int>> matrix)
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                matrix[i][j] = 2;
            }
        }
        cout << endl;
    }
};
class Square
{
public:
    vector<vector<int>> matrix;
    Square()
    {
        matrix.resize(lenght, vector<int>(lenght));
    }
    ~Square() 
    {
        system("cls");
        matrix.clear();
    } 
private:
    int lenght = 0;
};
class Function
{
public:

    Function()
    {
        calculation();
        vectorx_size();
        calculation();
    }
    ~Function()
    {
        char end;
        cin >> end;
    }
private:
    const double a = 2.0;
    const double b = 3.0;
    double xn = 0.11;
    double xk = 0.36;
    double dx = 0.05;
    int size = 0;
    vector<double> vectorx = { 0.08, 0.26, 0.35, 0.41, 0.53 };
    vector<double> vectory;
    void calculation()
    {
        vectory.resize(vectorx.size());
        for (int i = 0; i < vectorx.size(); i++)
        {
            vectory[i] = (asin(pow(vectorx[i], a)) + acos(pow(vectorx[i], b)));;
        }     
        print_function();
    }
    void vectorx_size()
    {
        vectorx.clear();
        size = (((xk - xn) / dx) + 1);
        vectorx.resize(size);
        for (int i = 0; i < vectorx.size(); i++)
        {
            vectorx[i] = xn;
            xn += dx;
        }
    }
    void print_function()
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        for (int i = 0; i < vectorx.size(); i++)
        {
            cout << "x = " << vectorx[i] << '\t' << "y = " << vectory[i] << endl;
        }        
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
}; 