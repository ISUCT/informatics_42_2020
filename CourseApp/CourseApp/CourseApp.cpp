#include <iostream>
#include "Calc.h"
#include <malloc.h>
using namespace std;

int main()
{
    const double a = 2.0;   
    const double b = 3.0;                                      // Переменная для определения размера массива для Task_A
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    int sizeA = calcSizeA(0.11, 0.36, 0.05);             // Переменная для определения размера массива для Task_A. Вычисление размера массива.
    sizeA = sizeA * 2;
    double *ArrayA = new double[sizeA];                 // Созданание динамического массива для Task_A
    score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);        // Вычисление и запись значений в массив для Task_A
    task_A_out( sizeA, ArrayA);                        // Вывод значений для Task_A
    
    cout << "=======================" << endl;
                                                    
    int sizeB = ((sizeof(x) / sizeof(x[0])) * 2);       // Переменная для определения размера массива для Task_B. Вычисление размера массива.
    double* ArrayB = new double[sizeB];                 // Созданание динамического массива для Task_B
    score_taskB(a, b, x, sizeB, ArrayB);                // Вычисление и запись значений в массив для Task_B 
    task_B_out(sizeB, ArrayB);                          // Вывод значений для Task_B
    
    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}
