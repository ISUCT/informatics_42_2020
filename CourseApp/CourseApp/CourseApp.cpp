#include <iostream>
#include "Calc.h"
using namespace std;

int main()
{
    const double a = 2.0;
    const double b = 3.0;
    double Array[2][2][6];
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    taskA(a, b, 0.11, 0.36, 0.05, Array);
    taskB(a, b, x, Array);
    for (int i = 0; i < 6; i++)
        cout << "x = " << Array[0][0][i] << " |" << " y =" << Array[0][1][i] << endl;
    cout << "=======================" << endl;
    for (int i = 0; i < 5; i++)
        cout << "x = " << Array[1][0][i] << " |" << " y = " << Array[1][1][i] << endl;
    char end;
    cin >> end;
    return 0;
}
