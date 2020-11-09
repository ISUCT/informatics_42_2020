#include <iostream>
#include "Calc.h"
#include <malloc.h>
#include <string>  
using namespace std;

class Square
{
public:

    int width = 0, height = 0; // ������ � ������ �������
    double diagonal;
    char line = ' ' , obj = ' ';
    bool switch_line = false; // ������������ �����
    bool switch_lineP = false; // ������������ ����� ��������������
    char**array;
    void diagonal_length(int height, int width, int line) // ������ ���������
    {
        diagonal = sqrt(pow(height, 2) + pow(width, 2));
        cout << "Diagonal = " << diagonal << endl;
    }
    void test() // �������� �����
    {
        cout << "it`s okay " << endl;
    }
    void value(int height, int width)
    {
        if ((height <= 0) || (width <= 0))
        {
            cout << "ERROR";
            exit(0);
        }
    }
};

int main(int height, int width, double diagonal, char line, char obj, bool switch_line, bool switch_lineP, char**array)
{
    Square sqr;

    cout << "Enter width and height" << endl;
    cout << "Height : "; cin >> height;
    cout << "Width : "; cin >> width;
    sqr.value(height, width);
    cout << "Line character : "; cin >> line;
    cout << "Object character : "; cin >> obj;
    cout << "Switch line (true / false) : "; cin >> switch_lineP;
    sqr.diagonal_length(height, width, line);

    array = new char * [height];
    for (int i = 0; i < height; i++)    // ���������� �������
    {
        array[i] = new char[width];
    }
    for (int i = 0; i < height; i++)    // ���������� �������
    {
        for (int j = 0; j < width; j++)
        {
            if ((switch_line == true) || (switch_lineP == true))
            {
                if (i == j)
                {
                    array[i][j] = line;
                }
                else
                {
                    array[i][j] = obj;
                }
            }
            else
            {
                array[i][j] = obj;
            }
        }
    }
    for (int i = 0; i < height; i++)    // ����� �������
    {
        for (int j = 0; j < width; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < height; i++)   // �������� �������
    {
        delete[] array[i];
    }
        delete[] array;

    sqr.test();
    return 0;

    //const double a = 2.0;   
    //const double b = 3.0;                                      // ���������� ��� ����������� ������� ������� ��� Task_A
    //double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    //int sizeA = calcSizeA(0.11, 0.36, 0.05);             // ���������� ��� ����������� ������� ������� ��� Task_A. ���������� ������� �������.
    //sizeA = sizeA * 2;
    //double *ArrayA = new double[sizeA];                 // ���������� ������������� ������� ��� Task_A
    //score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);        // ���������� � ������ �������� � ������ ��� Task_A
    //task_A_out( sizeA, ArrayA);                        // ����� �������� ��� Task_A
    //
    //cout << "=======================" << endl;
    //                                                
    //int sizeB = ((sizeof(x) / sizeof(x[0])) * 2);       // ���������� ��� ����������� ������� ������� ��� Task_B. ���������� ������� �������.
    //double* ArrayB = new double[sizeB];                 // ���������� ������������� ������� ��� Task_B
    //score_taskB(a, b, x, sizeB, ArrayB);                // ���������� � ������ �������� � ������ ��� Task_B 
    //task_B_out(sizeB, ArrayB);                          // ����� �������� ��� Task_B
    //
    //char end;
    //cin >> end;
    //delete[] ArrayA;
    //delete[] ArrayB;
    //return 0;
}
