#include <iostream>
#include <math.h>
#include "Calc.h"
using namespace std;

int main()
{
    const double a = 2.0;
    const double b = 1.1;
    taskA(a, b, 0.08, 1.08, 0.2);
    double arr[] = { 0.1, 0.3, 0.4, 0.45, 0.65 };
    cout << "--------------------" << endl;
    taskB(a, b, arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
