#include <iostream>
#include "Calc.h"
#include <malloc.h>
using namespace std;

int main()
{
    const double a = 2.0;   
    const double b = 3.0;
    int SizeA = 0;                                      // Переменная для определения размера массива для Task_A
    int SizeB = 0;                                      // Переменная для определения размера массива для Task_B
    int *pSizeA = &SizeA;
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };
    calcA(0.11, 0.36, 0.05, pSizeA);                    // Вычисление размера массива для Task_A
    SizeA = SizeA * 2;
    double *ArrayA = new double[SizeA];                 // Созданание динамического массива для Task_A
    SizeB = ((sizeof(x) / sizeof(x[0])) * 2);           // Вычисление размера массива для Task_B
    double* ArrayB = new double[SizeB];                 // Созданание динамического массива для Task_B
    Score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);        // Вычисление и запись значений в массив для Task_A
    Task_A_out( pSizeA, ArrayA);                        // Вывод значений для Task_A
    cout << "=======================" << endl;
    Score_taskB(a, b, x, SizeB, ArrayB);                // Вычисление и запись значений в массив для Task_B 
    Task_B_out(SizeB, ArrayB);                          // Вывод значений для Task_B
    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}
