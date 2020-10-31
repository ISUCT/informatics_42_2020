#include <iostream>
#include "Calc.h"
#include <malloc.h>
using namespace std;

int main()
{
    const double a = 2.0;   
    const double b = 3.0;                                      // ���������� ��� ����������� ������� ������� ��� Task_A
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    int sizeA = calcSizeA(0.11, 0.36, 0.05);             // ���������� ��� ����������� ������� ������� ��� Task_A. ���������� ������� �������.
    sizeA = sizeA * 2;
    double *ArrayA = new double[sizeA];                 // ���������� ������������� ������� ��� Task_A
    score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);        // ���������� � ������ �������� � ������ ��� Task_A
    task_A_out( sizeA, ArrayA);                        // ����� �������� ��� Task_A
    
    cout << "=======================" << endl;
                                                    
    int sizeB = ((sizeof(x) / sizeof(x[0])) * 2);       // ���������� ��� ����������� ������� ������� ��� Task_B. ���������� ������� �������.
    double* ArrayB = new double[sizeB];                 // ���������� ������������� ������� ��� Task_B
    score_taskB(a, b, x, sizeB, ArrayB);                // ���������� � ������ �������� � ������ ��� Task_B 
    task_B_out(sizeB, ArrayB);                          // ����� �������� ��� Task_B
    
    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}
