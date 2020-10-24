
#include <iostream>
#include "Calc.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "We have " << argc << " params" << endl;
    for(int i = 0; i < argc ;i++)
    {
        cout << argv[i] << endl;
    }

    const double a = 2.0;
    const double b = 3.0;

    taskA(a, b, 0.11, 0.36, 0.05);
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53};
    cout << "_______________________" << endl;

    taskB(a, b, x, sizeof(x) / sizeof(x[0]));
    char end;
    cin >> end;    
    cout << "it`s working" << endl;
    return 0;
}
