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
    taskA(a, b, 1.5, 3.5, 0.4);
    double x[] = { 1.9 ,2.15 ,2.34 ,2.74 ,3.16 };
    cout << "-----------------------" << endl;
    taskB(a, b, x, sizeof(x) / sizeof(x[0]));
    char end;
    cin >> end;
    return 0;

    
}


