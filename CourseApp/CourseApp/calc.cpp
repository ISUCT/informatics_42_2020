#include <iostream>
#include <cmath>
using namespace std;

double calc(double a, double b, double x)
{
    double y = (asin(pow(x, a)) + acos(pow(x, b)));
    return y;
}
void calcA(double xn, double xk, double dx, int *pSizeA)
{ 
    int num = *pSizeA;
    for (double x = xn; x <= xk; x += dx)
    {
        num++;
    }
    *pSizeA = num;
}
void Score_taskA(double a, double b, double xn, double xk, double dx, double *ArrayA)
{
    int i = 0;
    for (double x = xn; x <= xk; x += dx)
    {
        double y = calc(a, b, x);
        ArrayA[i] = x;       // Ввод элементов в массив X и Y через один для Task_A
        i++;
        ArrayA[i] = y;
        i++;
    }
    return;
}
void Task_A_out(int *pSizeA, double *ArrayA)
{
    for (int i = 0; i <= (*pSizeA - 1); i += 2)
    {
        cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;    // Вывод элементов X и Y через один для Task_A
    }
}
void Score_taskB(double a, double b, double *x, int SizeB, double *ArrayB)
{
    int i = 0;
    for (int n = 0; n <= ((SizeB/2)-1); n++)
    {
        double y = calc(a, b, x[n]);
        ArrayB[i] = x[n];       // Ввод элементов в массив X и Y через один для Task_B
        i++;
        ArrayB[i] = y;
        i++;
    }
    return;
}
void Task_B_out(int SizeB, double *ArrayB)
{
    for (int j = 0; j <= (SizeB - 1); j += 2)
    {
        cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;    // Вывод элементов X и Y через один для Task_B
    }
}