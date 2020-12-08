#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
class Interface
{
public: 
    Interface(vector<vector<int>> square)
    {
        this->matrix = square;
        create_matrix();
        actions();
    }
private:
    vector<vector<int>> matrix;
    int lenght;
    char obj;
    char line;
    int variant;
    void get_lenght()
    {
        cout << "Enter lenght : ";  cin >> lenght;
        while (lenght <= 0)
        {
            system("cls");
            cout << "Enter correct lenght : "; cin >> lenght;
        }
        system("cls");
    }
    void get_character()
    {
        system("cls");
        cout << "Line character : "; cin >> line;
        cout << "Object character : "; cin >> obj;
        system("cls");
    }

    void actions()
    {
        while (variant != 6)
        {
            print_square();
            print_actions();
            cout << "Choose action : "; cin >> variant;
            switch (variant)
            {
            case 1:
                changes();
                break;
            case 2:
                presets();
                break;
            case 3:
                lines();
                break;
            case 4:
                fill();
                break;
            case 5:
                clear();
                break;
            }
        }
        system("cls");
    }

    void print_square()
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
    }
    void print_actions()
    {
        cout << endl;
        cout << "You can : " << endl;
        cout << "  1) change size or character" << endl;
        cout << "  2) draw presets" << endl;
        cout << "  3) draw lines" << endl;
        cout << "  4) fill box" << endl;
        cout << "  5) clear all" << endl;
        cout << "  6) delete all and exit" << endl;
        cout << endl;
    }
    void print_lines()
    {
        cout << endl;
        cout << "You can : " << endl;
        cout << "  1) change size or character" << endl;
        cout << "  2) draw presets" << endl;
        cout << "  3) draw lines ->" << "  1) left line" <<"  2) right line" <<"  3) up line" <<"  4) down line" <<"  5) back" << endl;
        cout << "  4) fill box" << endl;
        cout << "  5) clear all" << endl;
        cout << "  6) delete all and exit" << endl;
        cout << endl;
    }
    void print_changes()
    {
        cout << endl;
        cout << "You can : " << endl;
        cout << "  1) change size or character ->" << "  1) change size" << "  2) change character" << "  3) back" << endl;
        cout << "  2) draw presets" << endl;
        cout << "  3) draw lines" << endl;
        cout << "  4) fill box" << endl;
        cout << "  5) clear all" << endl;
        cout << "  6) delete all and exit" << endl;
        cout <<  endl;
    }
    void print_presets()
    {
        cout << endl;
        cout << "You can : " << endl;
        cout << "  1) change size or character" << endl;
        cout << "  2) draw presets ->" << "  1) draw box" << "  2) draw diogonal 1" << "  3) back" << endl;
        cout << "  3) draw lines" << endl;
        cout << "  4) fill box" << endl;
        cout << "  5) clear all" << endl;
        cout << "  6) delete all and exit" << endl;
        cout << endl;
    }

    void draw_square()
    {
        left_line();
        right_line();
        up_line();
        down_line();
        cout << endl;
    }
    void fill()
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
    void diagonal()
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
    void clear()
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

    void left_line()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if (j == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void right_line()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if (j == (lenght - 1))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void up_line()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if (i == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void down_line()
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = 0; j < lenght; j++)
            {
                if (i == (lenght - 1))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    void presets()
    {
        system("cls");
        print_square();
        print_presets();
        cout << "Choose type of presets : "; cin >> variant;
        switch (variant)
        {
        case 1:
            draw_square();
            break;
        case 2:
            diagonal();
            break;
        case 3:
            actions();
            break;
        }
    }
    void lines()
    {
        system("cls");
        print_square();
        print_lines();
        cout << "Choose type of line : "; cin >> variant;
        switch (variant)
        {
        case 1:
            left_line();
            break;
        case 2:
            right_line();
            break;
        case 3:
            up_line();
            break;
        case 4:
            down_line();
            break;
        case 5:
            actions();
            break;
        }
    }
    void changes()
    {
        system("cls");
        print_square();
        print_changes();
        cout << "Choose type of changes : "; cin >> variant;
        switch (variant)
        {
        case 1:
            change_matrix();
            break;
        case 2:
            get_character();
            break;
        case 3:
            actions();
            break;
        }
    }

    void change_matrix()
    {
        system("cls");
        get_lenght();
        matrix.clear();
        matrix.resize(lenght, vector<int>(lenght));
        clear();
    }
    void create_matrix()
    {
        get_lenght();
        get_character();
        matrix.resize(lenght, vector<int>(lenght));
        clear();
    }
};
class Square
{
public:
    vector<vector<int>> square;
    Square()
    {
        square.resize(lenght, vector<int>(lenght));
    }
    ~Square() 
    {
        system("cls");
        square.clear();
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