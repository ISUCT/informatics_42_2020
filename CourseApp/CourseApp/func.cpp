#include <iostream>
#include <math.h>

double func(double x, double a)
{
    double y = pow(a,pow(x,2)-1) - log10(pow(x,2)-1) + pow(pow(x,2)-1, 1/3.0);
    return y;
}
void taskA(double a, double xn, double xk, double dx)
{
    std::cout << "Task A" << std::endl;
    for(double x = xn; x <= xk; x += dx)
    {
        double y = func(a,x);
        std::cout << "x = " << x << "\t" << "y = " << y << std::endl;
    }
    std::cout << "---------------------------------------" << std::endl;
    return;
}
void taskB(double a, double xs[], int size)
{
    std::cout << "Task B" << std::endl;
    for (int i = 0 ; i < size; i++)  
    {
        double x = xs[i];
        double y = func(a,x);
        std::cout << "x= "<< x << " y= " << y << std::endl;
    }
    return;
}