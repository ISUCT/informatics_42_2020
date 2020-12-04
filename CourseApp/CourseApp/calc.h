#pragma once
#include <iostream>
#include <malloc.h>
#include <string> 
#include <cstdlib>
using namespace std;

double calc(double a, double b, double x);
void calcA(double xn, double xk, double dx, int* pSizeA);
void Score_taskA(double a, double b, double xn, double xk, double dx, double* ArrayA);
void Score_taskB(double a, double b, double* x, int SizeB, double* ArrayB);

////////////////////////////

class Interface
{
public: 
    int lenght;
    char obj;
    char line;
    int** array;
    Interface(int **array, int lenght)
    {
        this->array = array;
        this->lenght = lenght;
        set_obj_line();
        actions();
    }
private:
    string str;
    void set_obj_line()
    {
        cout << "Line character : "; cin >> line;
        cout << "Object character : "; cin >> obj;
        system("cls");
    }
    void actions()
    {
        while (str != "delete")
        {
            print();
            cout << "Choose action : "; cin >> str;
            if ((str == "draw") || (str == "create"))
            {
                draw();
            }
            else if ((str == "diagonal") || (str == "line"))
            {
                diagonal();
            }
            else if (str == "fill")
            {
                fill();
            }
            else if (str == "clear")
            {
                clear();
            }
        }
        system("cls");
    }
    void print()
    {
        system("cls");
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if (array[i][j] == 1)
                {
                    cout << line << line;
                }
                else if (array[i][j] == 0)
                {
                    cout << obj << obj;
                }
                else if (array[i][j] == 2)
                {
                    cout << ' ' << ' ';
                }
                else if (array[i][j] == 9)
                {
                    cout << '.' << '.';
                }
                else
                {
                    cout << '.' << '.';
                }
            }
            cout << endl;
        }
        cout << endl;
        cout << "You can draw : " << endl;
        cout << "  1) box -> draw / create" << endl;
        cout << "  2) diagonal -> diagonal / line" << endl;
        cout << "  3) fill box -> fill" << endl;
        cout << "  4) clear all -> clear" << endl;
        cout << "  5) delete all and exit -> delete" << endl;
    }
    void draw()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if ((i == 0) || (i == (lenght - 1)) || (j == 0) || (j == (lenght - 1)))
                {
                    array[i][j] = 0;
                }
                else
                {
                    array[i][j] = 2;
                }
            }
        }
        cout << endl;
    }
    void fill()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                array[i][j] = 0;
            }
        }
        cout << endl;
    }
    void diagonal()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if ((i == j) && (array[i][j] != 0))
                {
                    array[i][j] = 1;
                }
            }
        }
        cout << endl;
    }
    void clear()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                array[i][j] = 9;
            }
        }
        cout << endl;
    }
};
class Square
{
public:
    int lenght;
    int** array;
    Square()
    {
        set_lenght();
        array = new int* [lenght];
        for (int i = 0; i < (lenght); i++)
        {
            array[i] = new int[lenght];
        }
    }
    ~Square() 
    {
        system("cls");
        cout << "Goodbye ;)" << endl;
        for (int i = 0; i < lenght; i++)
        {
            delete[] array[i];
        }
        delete[] array;
    } 
private:
    void set_lenght()
    {
        cout << "Enter lenght : ";  cin >> lenght;
        while (lenght <= 0)
        {
            system("cls");
            cout << "Enter correct lenght : "; cin >> lenght;
        }
        system("cls");
    }
};
