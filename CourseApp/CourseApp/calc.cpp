//#include <iostream>
//#include <math.h>
//#include <string>
//using namespace std;
//
//
//double calc(double a, double b, double x)
//{
//    double numenator = a * pow(x, 1 / 3.0) - b * log(x) / log(5);
//    double denominator = pow(log(x - 1) / log(10), 3);
//    double y = numenator / denominator;
//    return y;
//}
//
//double calc(double x)
//{
//    const double a = 4.1;
//    const double b = 2.7;
//    return calc(a, b, x);
//}
//
//
//int taskA(double a, double b, double xn, double xk, double dx,double *&y)
//{
//    int n = (xk - xn) / dx + 1;
//    int i = 0;
//    y = new double[n];
//    for (double k = xn; k <= xk; k += dx)
//    {
//        y[i] = calc(k);
//        i++;
//    }
//    return n;
//}
//int taskB(double a, double b, double* x, int size, double *&y1)
//    
//{
//    y1 = new double[size];
//    for (int i = 0; i < size; i++)
//    {
//        double y = calc(a, b, x[i]);
//        y1[i] = y;
//    }
//    return size;
//}
