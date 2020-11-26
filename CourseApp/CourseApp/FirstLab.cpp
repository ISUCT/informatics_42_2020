#include <iostream>
#include <cmath>
#include "FirstLab.h"

using namespace std;

int main()
{
    double* arr;
    int size1 = taskA(1.6,1.2,3.7,0.5,arr);
    ConsoleOut(size1,arr);
    cout << "-----------" << endl;
    double xs[5] = {1.28, 1.36, 2.47, 3.68, 4.56};
    int size2 = sizeof(xs)/sizeof(xs[0]);
    taskB(1.6,xs,size2,arr);
    ConsoleOut(size2,arr);
    delete[] arr;
    return 0;
}