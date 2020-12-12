#include <iostream>
#include "Calc.h"
using namespace std;


int main(int argc, char* argv[])
{
    cout << "We have " << argc << " params" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    const double a = 4.1;
    const double b = 2.7;
    double* y;
    int m = taskA(a, b, 1.5, 3.5, 0.4, y);
    for (int i = 0; i < m; i++) {
        cout << y[i] << endl;
    }
    delete[] y;
    double* y1;
    double x[] = { 1.9 ,2.15 ,2.34 ,2.74 ,3.16 };
    cout << "-----------------------" << endl;
    m = taskB(a, b, x, sizeof(x) / sizeof(x[0]), y1);
    for (int i = 0; i < m; i++) {
        cout << y1[i] << endl;
    }
    delete[] y1;
    char end;
    cin >> end;
    return 0;

    
}














