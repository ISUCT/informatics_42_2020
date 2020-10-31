#include <iostream>
#include "Calc.h"
#include <malloc.h>
using namespace std;

int main()
{
    const double a = 2.0;   
    const double b = 3.0;
    int SizeA = 0;                                      // ���������� ��� ����������� ������� ������� ��� Task_A
    int SizeB = 0;                                      // ���������� ��� ����������� ������� ������� ��� Task_B
    int *pSizeA = &SizeA;
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };
    calcA(0.11, 0.36, 0.05, pSizeA);                    // ���������� ������� ������� ��� Task_A
    SizeA = SizeA * 2;
    double *ArrayA = new double[SizeA];                 // ���������� ������������� ������� ��� Task_A
    SizeB = ((sizeof(x) / sizeof(x[0])) * 2);           // ���������� ������� ������� ��� Task_B
    double* ArrayB = new double[SizeB];                 // ���������� ������������� ������� ��� Task_B
    Score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);        // ���������� � ������ �������� � ������ ��� Task_A
    Task_A_out( pSizeA, ArrayA);                        // ����� �������� ��� Task_A
    cout << "=======================" << endl;
    Score_taskB(a, b, x, SizeB, ArrayB);                // ���������� � ������ �������� � ������ ��� Task_B 
    Task_B_out(SizeB, ArrayB);                          // ����� �������� ��� Task_B
    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}
