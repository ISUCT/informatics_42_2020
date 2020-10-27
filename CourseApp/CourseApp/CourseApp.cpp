#include <iostream>
#include "Calc.h"
using namespace std;

int main()
{
    const double a = 2.0;
    const double b = 3.0;
    double TA[2][6];
    double TB[5]; 
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    taskA(a, b, 0.11, 0.36, 0.05, TA);
    taskB(a, b, x, TB);

    for (int i = 0; i < 6; i++) 
        cout << "x = " << TA[0][i] << " |" << " y = " << TA[1][i] << endl;
    cout << "=======================" << endl;
    for (int i = 0; i < 5; i++)
        cout << "x = " << x[i] <<" |" << " y = " << TB[i] << endl;
    char end;
    cin >> end;
    return 0;
}
