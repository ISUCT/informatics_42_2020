#include <iostream>
#include "Calc.h"
#include <malloc.h>
#include <string>  
#include <vector>

using namespace std;

class Square
{

public:

    int width = 0;
    int height = 0;

    char line = ' ';
    char obj = ' ';

    bool mode_switcher = true;
    bool line_switcher = false;

    int** array;

    void input_values()
    {
        cout << "Enter width and height" << endl;
        cout << "Height : "; cin >> height;
        cout << "Width : "; cin >> width;
        while ((height <= 0) || (width <= 0))
        {
            cout << "Enter correct width and height" << endl;
            cout << "Height : "; cin >> height;
            cout << "Width : "; cin >> width;
        }
        cout << "Line character : "; cin >> line;
        cout << "Object character : "; cin >> obj;
        cout << "Switch line (true / false) : "; cin >> line_switcher;
        cout << "Switch mode (true / false) : "; cin >> mode_switcher;

        
    }
    void create_array()
    {
        array = new int* [height];
        for (int i = 0; i < height; i++)
        {
            array[i] = new int[width];
        }
    }
    void in_out_array() {
        Q_in(mode_switcher, line_switcher, height, width, array);
        Q_out(height, width, obj, line, array);
    }
    void delete_array() {
        for (int i = 0; i < height; i++)
        {
            delete[] array[i];
        }
        delete[] array;
    }
    void test() // тестовый вывод
    {
        cout << "it`s okay " << endl;
    }
};




int main()
{
    Square sqr;
    sqr.input_values();
    sqr.create_array();
    sqr.in_out_array();
    sqr.delete_array();
    sqr.test();
    return 0;
}
