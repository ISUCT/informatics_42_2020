#include <iostream>
#include "Calc.h"
#include <malloc.h>
using namespace std;

int main()
{
    const double a = 2.0;
    const double b = 3.0;
    int SizeA = 0;
    int SizeB = 0;
    int *pSizeA = &SizeA;
    double x[] = { 0.08, 0.26, 0.35, 0.41, 0.53 };

    calcA(0.11, 0.36, 0.05, pSizeA);
    SizeA = SizeA * 2;
    double *ArrayA = new double[SizeA];

    SizeB = ((sizeof(x) / sizeof(x[0])) * 2);
    double* ArrayB = new double[SizeB];
    

    Score_taskA(a, b, 0.11, 0.36, 0.05, ArrayA);
    for (int i = 0; i <= (SizeA - 1); i += 2)
    {
        cout << "x = " << ArrayA[i] << " | " << "y = " << ArrayA[i + 1] << endl;
    } 
    
    cout << "=======================" << endl;

    Score_taskB(a, b, x, SizeB, ArrayB);
    for (int j = 0; j <= (SizeB - 1); j += 2)
    {
        cout << "x = " << ArrayB[j] << " | " << "y = " << ArrayB[j + 1] << endl;
    }

    char end;
    cin >> end;
    delete[] ArrayA;
    delete[] ArrayB;
    return 0;
}
