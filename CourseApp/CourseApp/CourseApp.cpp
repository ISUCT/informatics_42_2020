#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

int main()
{
    const double a = 2.0;
    const double b = 1.1;
    double* y;
    int h = taskA(a, b, 0.08, 1.08, 0.2, y);

    for (int i = 0; i < h; i++)
    {
         cout << y[i] << endl;
    }
    delete[] y;

    //double* y1;
    double arr[] = { 0.1, 0.3, 0.4, 0.45, 0.65 };
    cout << "--------------------" << endl;
    h = taskB(a, b, arr, sizeof(arr) / sizeof(arr[0]), y);

    for (int i = 0; i < h; i++)
    {

        cout << arr[i] << "\t" << y[i] << endl;
    }
    delete[] y;
    return 0;
}