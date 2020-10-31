#include <iostream>
#include <cmath>
using namespace std;

double calc(double a, double b, double x)
{
    double y = (asin(pow(x, a)) + acos(pow(x, b)));
    return y;
}
int calcSizeA(double xn, double xk, double dx)
{ 
    int num = 0;
    for (double x = xn; x <= xk; x += dx)
    {
        num++;
    }
    return num;
}
void score_taskA(double a, double b, double xn, double xk, double dx, double *ArrayA)
{
    int i = 0;
    for (double x = xn; x <= xk; x += dx)
    {
        double y = calc(a, b, x);
        ArrayA[i] = x;       // ���� ��������� � ������ X � Y ����� ���� ��� Task_A
        i++;
        ArrayA[i] = y;
        i++;
    }
    return;
}
void task_A_out(int sizeA, double *ArrayA)
{
    for (int i = 0; i <= (sizeA - 1); i += 2)
    {
        cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;    // ����� ��������� X � Y ����� ���� ��� Task_A
    }
}
void score_taskB(double a, double b, double *x, int sizeB, double *ArrayB)
{
    int i = 0;
    for (int n = 0; n <= ((sizeB/2)-1); n++)
    {
        double y = calc(a, b, x[n]);
        ArrayB[i] = x[n];       // ���� ��������� � ������ X � Y ����� ���� ��� Task_B
        i++;
        ArrayB[i] = y;
        i++;
    }
    return;
}
void task_B_out(int sizeB, double *ArrayB)
{
    for (int j = 0; j <= (sizeB - 1); j += 2)
    {
        cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;    // ����� ��������� X � Y ����� ���� ��� Task_B
    }
}