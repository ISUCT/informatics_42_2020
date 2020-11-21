#pragma once
#include <iostream>
#include <malloc.h>
#include <string> 
#include <cstdlib>

void draw(int height, int width, char obj, char line, int** array);

using namespace std;

class Square
{
public:
    int width = 0;
    int height = 0;
    int** array;

    Square(string name)
    {
        system("cls");
        cout << "Enter width and height" << endl;
        cout << "Height : "; cin >> height;
        cout << "Width : "; cin >> width;
        while ((height <= 0) || (width <= 0))
        {
            system("cls");
            cout << "Enter correct width and height" << endl;
            cout << "Height : "; cin >> height;
            cout << "Width : "; cin >> width;
        }
        cout << "Line character : "; cin >> line;
        cout << "Object character : "; cin >> obj;
        system("cls");



        array = new int* [height];
        for (int i = 0; i < height; i++)
        {
            array[i] = new int[width];
        }
        while (str != "delete")
        {
            cout << "Choose action : "; cin >> str;
            system("cls");
            if (str == "draw")
            {
                for (int i = 0; i < height; i++)
                {
                    for (int j = 0; j < width; j++)
                    {
                        if ((i == 0) || (i == (height - 1)) || (j == 0) || (j == (width - 1)))
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
            else if (str == "diagonal")
            {
                for (int i = 0; i < height; i++)
                {
                    for (int j = 0; j < width; j++)
                    {
                        if ((i == j) && (i != 0) && (j != 0) && (i != (height - 1)) && (j != (width - 1)))
                        {
                            array[i][j] = 1;
                        }
                    }
                }
                cout << endl;
            }
            else if (str == "fill")
            {
                for (int i = 0; i < height; i++)
                {
                    for (int j = 0; j < width; j++)
                    {
                        array[i][j] = 0;
                    }
                }
                cout << endl;
            }
            else if (str == "name")
            {
                cout << "Square name is : " << name << endl;
            }
            draw(height, width, obj, line, array);
            cout << endl;
        }
    }

    ~Square() {
        system("cls");
        cout << "deleted";
        for (int i = 0; i < height; i++)
        {
            delete[] array[i];
        }
        delete[] array;
    }
private:
    char line = ' ';
    char obj = ' ';
    string str;
};